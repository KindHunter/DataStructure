//
// Created by seven on 2020/8/21.
//

#include "gtest/gtest.h"
#include <iostream>
#include "graph/BFS.h"

class GraphTestFixture: public ::testing::Test{

protected:
    BFS *bfs;

    virtual void SetUp(){
        bfs = new BFS(5);
    }

    virtual void TearDown(){
        delete bfs;
    }

};