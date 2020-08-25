//
// Created by seven on 2020/8/21.
//

#include "gtest/gtest.h"
#include <iostream>
#include "graph/BFS.h"

using namespace std;
class GraphTestFixture: public ::testing::Test{

protected:
    BFS *bfs;

    virtual void SetUp(){
        bfs = new BFS(5);
        (bfs->adj)[0] = {2,4};
        (bfs->adj)[1] = {3,2};
        (bfs->adj)[2] = {3};
        (bfs->adj)[3] = {1};

    }

    virtual void TearDown(){
        delete bfs;
    }

};

/**
 * 测试广度优先搜索
 */
TEST_F(GraphTestFixture, testBasic) {
    list<int>  resultList = this->bfs->search(4, 0);
    list<int>::iterator it;
    cout << "result:{" <<endl;
    for(it = resultList.begin(); it != resultList.end(); it++){

        cout << "    " <<*it <<endl;

    }
    cout << "}" <<endl;
}