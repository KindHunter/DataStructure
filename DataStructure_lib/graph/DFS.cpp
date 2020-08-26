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
