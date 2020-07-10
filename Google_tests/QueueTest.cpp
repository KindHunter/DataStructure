//
// Created by seven on 2020/7/9.
//

#include "gtest/gtest.h"
#include <iostream>
#include "queue/ArrayQueue.h"


class QueueTestFixture: public ::testing::Test{
protected:
    ArrayQueue *myArrayQueue;

    virtual void SetUp(){
        myArrayQueue = new ArrayQueue(3);
    }

    virtual void TearDown(){
        delete myArrayQueue;
    }

};



TEST_F(QueueTestFixture, testBasic){
    EXPECT_TRUE(myArrayQueue->enqueue(1));
    EXPECT_TRUE(myArrayQueue->enqueue(2));
    EXPECT_TRUE(myArrayQueue->enqueue(3));
    EXPECT_FALSE(myArrayQueue->enqueue(4));
    EXPECT_EQ(myArrayQueue->dequeue(), 1);
    EXPECT_EQ(myArrayQueue->dequeue(), 2);
    EXPECT_EQ(myArrayQueue->dequeue(), 3);
    EXPECT_THROW(myArrayQueue->dequeue(), const char*);

}


TEST_F(QueueTestFixture, mixTest){
    EXPECT_TRUE(myArrayQueue->enqueue(1));
    EXPECT_EQ(myArrayQueue->dequeue(), 1);

    EXPECT_TRUE(myArrayQueue->enqueue(2));
    EXPECT_EQ(myArrayQueue->dequeue(), 2);


    EXPECT_TRUE(myArrayQueue->enqueue(3));
    EXPECT_EQ(myArrayQueue->dequeue(), 3);
    EXPECT_THROW(myArrayQueue->dequeue(), const char*);

}




