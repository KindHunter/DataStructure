//
// Created by seven on 2020/8/27.
//

#ifndef DATASTRUCTURE_DIJKSTRA_H
#define DATASTRUCTURE_DIJKSTRA_H

#include <vector>
#include <list>
#include <utility>

using namespace std;
class Dijkstra {
public:
    int v;
    vector<int> *adj;
    Dijkstra(int vertexCount);





    /**
     * search入口
     * @param s
     * @param t
     * @return
     */
    list<int> search(int s, int t);

    int getNextStart(bool settled[], int shortest[]);
};


#endif //DATASTRUCTURE_DIJKSTRA_H
