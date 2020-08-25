//
// Created by seven on 2020/8/25.
//

#ifndef DATASTRUCTURE_DFS_H
#define DATASTRUCTURE_DFS_H
#include <queue>
#include <list>
#include <stack>

using namespace std;

class DFS {
public:
    int v;
    list<int> *adj;
    DFS(int vertexCount);




    list<int> search(int s, int t);

    void cursiveSearch(int start, int end, list<int> *resultList, bool *started,
                  int *prev);
};


#endif //DATASTRUCTURE_DFS_H
