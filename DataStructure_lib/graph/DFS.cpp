//
// Created by seven on 2020/8/25.
//

#include "DFS.h"
#include <queue>
#include <list>
using namespace std;

DFS::DFS(int vertexCount) {
    this->v = vertexCount;
    this->adj = new list<int>[v];
}

list<int> DFS::search(int s, int t) {
    return list<int>();
}
