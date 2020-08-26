//
// Created by seven on 2020/8/25.
//

#include "DFS.h"
#include <list>
#include <stack>
using namespace std;

DFS::DFS(int vertexCount) {
    this->v = vertexCount;
    this->adj = new list<int>[v];
}


list<int> DFS::searchByStack(int s, int t){
    //最短路径结果集
    list<int> resultList;
    //邻接表访问标识，为true标识此index的邻接表已经遍历过了，不需要重复访问
    bool started[v];
    //每个顶点到起点可能连线，的前一个顶点（不一定是最短的连线）
    int prev[v];
    stack<int> startVertexStack;

    //初始化全局变量
    for (int i = 0; i < this->v; ++i) {
        started[i] = false;
        prev[i] = -1;
    }
    startVertexStack.push(s);

    while(!startVertexStack.empty()){
        //这里先top不pop，是因为还需要进行回溯，如果这个节点的所有相关节点都已经start过了，那么就可以进行pop了
        int adjStartIndex = startVertexStack.top();

        started[adjStartIndex] = true;
        list<int>::iterator it;
        bool needToPop = true;
        for(it = adj[adjStartIndex].begin(); it != adj[adjStartIndex].end(); it++){

            if (!started[*it]){
                needToPop = false;
                startVertexStack.push(*it);
                prev[*it] = adjStartIndex;
                if (*it == t){

                    int index = t;
                    resultList.push_front(t);
                    while (prev[index] != -1){
                        resultList.push_front(prev[index]);
                        index = prev[index];
                    }
                    return resultList;
                }
                //只要push了一个就立即跳出for循环，因为这里要进行深度搜索，不需要现在就沿着邻接表去遍历所有
                break;
            }

        }
        if(needToPop){
            //这里pop的，其实就是adjStartIndex，因为，只有一次push都没的情况下才会进这里
            startVertexStack.pop();
        }
    }
    return resultList;
}





list<int> DFS::search(int s, int t) {
    //最短路径结果集
    list<int> resultList;
    //邻接表访问标识，为true标识此index的邻接表已经遍历过了，不需要重复访问
    bool started[v];
    //每个顶点到起点可能连线，的前一个顶点（不一定是最短的连线）
    int prev[v];

    //初始化全局变量
    for (int i = 0; i < this->v; ++i) {
        started[i] = false;
        prev[i] = -1;
    }


    cursiveSearch(s, t, &resultList, started, prev);

    return resultList;

}

void DFS::cursiveSearch(int start, int end, list<int> *resultList, bool *started, int *prev){

    started[start] = true;
    list<int> thisRoundAdjList = this->adj[start];
    list<int>::iterator it;

    for(it = thisRoundAdjList.begin(); it != thisRoundAdjList.end(); ++it){
        if(!resultList->empty()){
            return;
        }

        if (!started[*it]){
            if (*it == end){
                //此点是目的地, 因为c++的原因这里不是很好return，所以只是在result里加了结果
                prev[end] = start;
                int index = end;
                resultList->push_front(end);
                while (prev[index] != -1){
                    resultList->push_front(prev[index]);
                    index = prev[index];
                }
                return;
            } else {
                //此点不是目的地，以此点为出发点继续寻找
                prev[*it] = start;
                cursiveSearch(*it, end, resultList, started, prev);
            }
        }
    }
}
