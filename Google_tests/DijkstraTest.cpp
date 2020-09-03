//
// Created by seven on 2020/9/3.
//
#include "gtest/gtest.h"
#include "graph/Dijkstra.h"
#include <iostream>
#include <cmath>
#include <list>


using namespace std;

class DijkstraTestFixture: public ::testing::Test {
public:
    Dijkstra *dijkstra;
    virtual void SetUp(){
        int vertexCount = 5;
        dijkstra = new Dijkstra(vertexCount);
        dijkstra->adj = new vector<int>[vertexCount];
        dijkstra->adj[0] = {0,7, 5, INT_MAX, INT_MAX};
        dijkstra->adj[1] = {7,0, 4, 6, INT_MAX};
        dijkstra->adj[2] = {5,4, 0, INT_MAX, 1};
        dijkstra->adj[3] = {INT_MAX,6, INT_MAX, 0, INT_MAX};
        dijkstra->adj[4] = {INT_MAX,INT_MAX, 1, INT_MAX, 0};

    }

    virtual void TearDown(){
        delete dijkstra;

    }
};


TEST_F(DijkstraTestFixture, testBasic) {
    list<int> result = dijkstra->search(0, 4);
    list<int>::iterator it;
    for(it = result.begin(); it != result.end(); it++){
        cout << *it << endl;
    }
}


