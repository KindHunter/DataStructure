//
// Created by seven on 2020/8/21.
//

#include "gtest/gtest.h"
#include <iostream>
#include "graph/BFS.h"
#include "graph/DFS.h"

using namespace std;
class GraphTestFixture: public ::testing::Test{

protected:
    BFS *bfs;
    DFS *dfs;
    virtual void SetUp(){
        bfs = new BFS(5);
        (bfs->adj)[0] = {2,4, 1};
        (bfs->adj)[1] = {3,2};
        (bfs->adj)[2] = {3};
        (bfs->adj)[3] = {1};
        (bfs->adj)[4] = {};

        dfs = new DFS(5);
        (dfs->adj)[0] = {2,4, 1};
        (dfs->adj)[1] = {3,2};
        (dfs->adj)[2] = {3};
        (dfs->adj)[3] = {1};
        (dfs->adj)[4] = {};
    }

    virtual void TearDown(){
        delete bfs;
        delete dfs;

    }

};

/**
 * 测试广度优先搜索， 深度优先搜索
 */
TEST_F(GraphTestFixture, testBasic) {
    list<int>  bfsRList = this->bfs->search(0, 1);

    list<int>::iterator it;
    cout << "bfsRList:{" <<endl;
    for(it = bfsRList.begin(); it != bfsRList.end(); it++){
        cout << "    " <<*it <<endl;
    }
    cout << "}" <<endl;
    EXPECT_EQ(bfsRList.size(),2);


    list<int>  dfsRList = this->dfs->searchByStack(0, 1);


    cout << "dfsRList:{" <<endl;
    for(it = dfsRList.begin(); it != dfsRList.end(); it++){
        cout << "    " <<*it <<endl;
    }
    cout << "}" <<endl;
    EXPECT_EQ(dfsRList.size(),4);

    list<int>  dfsRList2 = this->dfs->search(0, 1);

    cout << "dfsRList2:{" <<endl;
    for(it = dfsRList2.begin(); it != dfsRList2.end(); it++){
        cout << "    " <<*it <<endl;
    }
    cout << "}" <<endl;
    EXPECT_EQ(dfsRList2.size(),4);

}