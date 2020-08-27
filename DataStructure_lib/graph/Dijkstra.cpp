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
    while()







    return list<int>();
}
