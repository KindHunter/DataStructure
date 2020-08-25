//
// Created by seven on 2020/8/25.
//

#ifndef DATASTRUCTURE_DFS_H
#define DATASTRUCTURE_DFS_H
#include <queue>
#include <list>
using namespace std;

class DFS {
public:
    int v;
    list<int> *adj;
    DFS(int vertexCount);


    list<int> search(int s, int t);
};


#endif //DATASTRUCTURE_DFS_H
