//
// Created by seven on 2020/7/6.
//

#include "gtest/gtest.h"
#include <iostream>
#include "stack/ArrayStack.h"
#include "stack/LinkedStack.h"


class StackTestFixture: public ::testing::Test{

protected:
    ArrayStack *myArrayStack;
    LinkedStack * myLinkedStack;

    virtual void SetUp(){
        myArrayStack = new ArrayStack(2);
        myLinkedStack = new LinkedStack();
    }

    virtual void TearDown(){
        delete myArrayStack;
        delete myLinkedStack;
    }

};

/**
 * 测试栈的基本功能
 */
TEST_F(StackTestFixture, testBasic){
    EXPECT_TRUE(myArrayStack->push(1));
    EXPECT_TRUE(myArrayStack->push(2));
    EXPECT_EQ(myArrayStack->pop(), 2);
    EXPECT_EQ(myArrayStack->pop(), 1);
    EXPECT_TRUE(myArrayStack->push(3));
    EXPECT_EQ(myArrayStack->pop(), 3);

    EXPECT_THROW(myArrayStack->pop(), const char*);

    EXPECT_TRUE(myLinkedStack->push(1));
    EXPECT_TRUE(myLinkedStack->push(2));
    EXPECT_EQ(myLinkedStack->pop(), 2);
    EXPECT_EQ(myLinkedStack->pop(), 1);

    EXPECT_THROW(myLinkedStack->pop(), const char*);
}

TEST_F(StackTestFixture, outOfArraySize){
    EXPECT_TRUE(myArrayStack->push(1));
    EXPECT_TRUE(myArrayStack->push(2));
    EXPECT_FALSE(myArrayStack->push(3));
}