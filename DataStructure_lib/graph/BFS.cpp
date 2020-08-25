//
// Created by seven on 2020/8/20.
//
#include <queue>
#include <list>
#include "BFS.h"
using namespace std;

    BFS::BFS(int vertexCount){
        this->v = vertexCount;
        this->adj = new list<int>[v];
    }


    list<int> BFS::search(int s, int t){
        //最短路径结果集
        list<int> resultList;
        //需要遍历的邻接表index
        queue<int> startVertexQueue;
        //顶点访问标识，为true说明已经找到最短路径了，对应prev有值
        bool visited[v];
        //每个顶点到起点最近连线，的前一个顶点
        int prev[v];

        //-------------------初始化-------------------------------------------
        for (int i = 0; i < v; ++i) {
            visited[i] = false;
            prev[i] = -1;
        }
        //-------------------初始化起点----------------------------------------
        visited[s] = true;
        startVertexQueue.push(s);

        //-------------------开始循环所有邻接表---------------------------------
        while (startVertexQueue.size() != 0){
            //从待访问点队列里pop出一个点
            int thisRountStart = startVertexQueue.front();
            startVertexQueue.pop();


            list<int> adjThisR = adj[thisRountStart];
            list<int>::iterator it;
            for (it = adjThisR.begin(); it != adjThisR.end(); ++it) {
                int edgeVertex = *it;
                //如果之前没有访问过这个点，那么执行一些列操作
                if (!visited[edgeVertex]){
                    //标记访问标识为已访问，因为这是第一次访问，即当前路径是最短的，以后再次访问的时候，可以直接跳过
                    visited[edgeVertex] = true;
                    //
                    startVertexQueue.push(edgeVertex);
                    prev[edgeVertex] = thisRountStart;
                    //如果这个点是我们的目的地，那么返回路径
                    if (edgeVertex == t){
                        int index = t;
                        resultList.push_front(t);
                        while (prev[index] != -1){
                            resultList.push_front(prev[index]);
                            index = prev[index];
                        }
                        return resultList;
                    }
                    startVertexQueue.push(edgeVertex);
                }
            }
        }
        return resultList;
    }