//
// Created by seven on 2020/8/27.
//

#include "Dijkstra.h"
#include <vector>
#include <list>
#include <cmath>

Dijkstra::Dijkstra(int vertexCount) {
    this->v = vertexCount;
    this->adj = new vector<int>[v];
}

list<int> Dijkstra::search(int s, int t) {
    list<int> result;
    if (s == t){
        result.push_front(s);
        return result;
    }


    bool settled[v];
    int pre[v];
    int shortest[v];

    //初始化字段
    for (int i = 0; i < v; ++i) {
        settled[i] = false;
        pre[i] = -1;
        shortest[i] = INT_MAX;
    }

    settled[s] = false;
    shortest[s] = 0;
    while(true){

        int thisStart = getNextStart(settled, shortest);

        if(thisStart == -1){
            //可连通的线路已经全部遍历完毕
            break;
        } else {
            settled[thisStart] = true;
        }

        vector<int> sides = adj[thisStart];
        for (int point = 0; point < v; ++point) {
            if (settled[point]){
                continue;
            }
            int length = sides.at(point);
            //s 和 point 相互连接，且不是自己连自己
            if (length != INT_MAX && thisStart != point){
                int newLength = shortest[thisStart] + length;
                if(shortest[point] > newLength){
                    shortest[point] = newLength;
                    pre[point] = thisStart;
                }
            }
        }

    }




    //如果s到t是可达的
    if (settled[t]){
        result.push_front(t);
        while(true){
            if(pre[t] != -1){
                result.push_front(pre[t]);
                t = pre[t];
            } else {
                break;
            }
        }
    }


    return result;
}

int Dijkstra::getNextStart(bool *settled, int *shortest) {
    int unsettledAndShortestIndex = -1;
    int unsettledAndShortestDistance = INT_MAX;
    for (int i = 0; i < v; ++i) {
        bool isSettle = settled[i];
        int distance = shortest[i];
        if (!isSettle && distance < unsettledAndShortestDistance){
            unsettledAndShortestIndex = i;
            unsettledAndShortestDistance = distance;
        }
    }
    return unsettledAndShortestIndex;
}
