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



    /**
     * search入口
     * @param s
     * @param t
     * @return
     */
    list<int> search(int s, int t);

private:
    /**
     * 递归搜索接口
     * @param start
     * @param end
     * @param resultList
     * @param started
     * @param prev
     */
    void cursiveSearch(int start, int end, list<int> *resultList, bool *started,
                  int *prev);
};


#endif //DATASTRUCTURE_DFS_H
