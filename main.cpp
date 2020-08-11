#include "iostream"
#include <iomanip>
#include <list>
#include <map>
using namespace std;

class BestRoute{
public:
    list<list<int>> routeList;
    int distance;
    bool settled = false;
};


int getThisRoundStart(map<int, BestRoute> * reusltMap, int to) {
    map<int, BestRoute>::iterator it = (*reusltMap).begin();
    int lowestToSite = -1;
    int lowestDistance = INT8_MAX;
    for (; it!= (*reusltMap).end() ; ++it) {
        if (it->second.settled == false){
            if (it->second.distance < lowestDistance){
                lowestToSite = it->first;
                lowestDistance = it->second.distance;
            }
        }
    }
    if (lowestToSite != -1){
        (*reusltMap).find(lowestToSite)->second.settled = true;
    }
    if(lowestToSite == to){
        return -1;
    }
    return lowestToSite;
}



int main(){
    int cityNum;
    int lineNum;
    int from;
    int to;
    int * cityRescue;
    list<int*> lineList;
    map<int, BestRoute> bestRouteMap;
    cin >> cityNum >> lineNum >> from >> to;
    cityRescue = new int[cityNum];
    for (int i = 0; i < cityNum; ++i) {
        cin >> cityRescue[i];
    }
    for (int j = 0; j < lineNum; ++j) {
        int lineFrom;
        int lineTo;
        int lineDistance;
        cin >> lineFrom >> lineTo >> lineDistance;
        int * lineArr = new int[3]{lineFrom, lineTo, lineDistance};
        lineList.push_back(lineArr);
    }

    BestRoute *firstRoute = new BestRoute();
    firstRoute->distance=0;
    firstRoute->settled = false;
    list<int> fr;
    fr.push_back(from);
    list<list<int>> frr;
    frr.push_back(fr);
    firstRoute->routeList = frr;

    bestRouteMap[from] = *firstRoute;
            

    while (true){
        int thisRoundStart = getThisRoundStart(&bestRouteMap, to);
        if(thisRoundStart == -1){
            break;
        }
        if(lineList.size() == 0){
            break;
        }
        list<int*>::iterator it = lineList.begin();
        for(;it!= lineList.end();it++){
            BestRoute routeBefore = bestRouteMap.find(thisRoundStart)->second;
            int thisFrom = (*it)[0];
            int thisTo = (*it)[1];
            int thisDistance = (*it)[2];
            if(from == thisFrom){
                if(bestRouteMap.find(thisTo) != bestRouteMap.end()){
                    BestRoute existRoute = bestRouteMap.find((*it)[1])->second;
                    //判断和存在的路由相比，那个更短
                    if (existRoute.distance < (thisDistance + routeBefore.distance)){
                        BestRoute *br = new BestRoute();
                        br->distance = routeBefore.distance + thisDistance;
                        br->routeList = routeBefore.routeList;
                        list<list<int>>::iterator it2;
                        for(it2 = br->routeList.begin(); br->routeList.end() != it2; it2++){
                            it2->push_back(thisTo);
                        }
                        bestRouteMap[thisTo] = *br;
                    } else if(existRoute.distance == (thisDistance + routeBefore.distance)){
                        list<int> newRoute;
                        list<list<int>> newRouteList = routeBefore.routeList;
                        list<list<int>>::iterator iterate;
                        for(iterate = newRouteList.begin(); iterate != newRouteList.end(); iterate++){
                            iterate->push_back(thisTo);
                            existRoute.routeList.push_back(*iterate);
                        }

                    }

                    
                }else{
                    BestRoute *br = new BestRoute();
                    br->distance = routeBefore.distance + thisDistance;
                    br->routeList = routeBefore.routeList;
                    list<list<int>>::iterator it2;
                    for(it2 = br->routeList.begin(); br->routeList.end() != it2; it2++){
                        it2->push_back(thisTo);
                    }
                    bestRouteMap[thisTo] = *br;
                }

                lineList.erase(it);
            }
        }

    }


    map<int, BestRoute>::iterator resultIt = bestRouteMap.find(to);
    if(resultIt != bestRouteMap.end()){
        BestRoute br = resultIt->second;
        int sumRescue = 0;
        
        list<list<int>>::iterator itt;
        for(itt = br.routeList.begin(); itt != br.routeList.begin(); itt++){
            list<int> insideList = *itt;
            list<int>::iterator itttt;
            for(itttt = insideList.begin(); itttt != insideList.begin(); itttt++){
                int site = *itttt;
                sumRescue += cityRescue[site];
            }
        }
        cout << br.routeList.size() << " " << sumRescue;
    }else {
        cout << "0 0";
    }




}


