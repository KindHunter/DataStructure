//
// Created by seven on 2020/8/21.
//

#ifndef DATASTRUCTURE_BFS_H
#define DATASTRUCTURE_BFS_H

#endif //DATASTRUCTURE_BFS_H
#include <queue>
#include <list>

class BFS{

public:
    int v;
    list<int> *adj;
    BFS(int vertexCount);


    list<int> search(int s, int t);
};
