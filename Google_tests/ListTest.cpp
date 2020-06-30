//
// Created by seven on 2020/6/28.
//

#include "gtest/gtest.h"
#include <iostream>
#include "linkedlist/LinkedList.h"

class ListTestFixture: public ::testing::Test{

protected:
    LinkedList *myList;

    virtual void SetUp(){
        myList = new LinkedList();
    }

    virtual void TearDown(){
        delete myList;
    }

};

/**
 * 测试链表基本函数
 */
TEST_F(ListTestFixture, testBasic){

    myList->addFirst(11);
    myList->addFirst(12);


    EXPECT_EQ(myList->size, 2);

    EXPECT_TRUE(myList->remove(0));

    EXPECT_EQ(myList->size, 1);

    EXPECT_FALSE(myList->contains(12));

    EXPECT_TRUE(myList->contains(11));

    EXPECT_TRUE(myList->remove(0));


}


/**
 * 测试链表反转
 */
TEST_F(ListTestFixture, testReverse){

    myList->addFirst(11);
    myList->addFirst(12);

    LinkedList * reversedList = myList->reverse();

    EXPECT_EQ(reversedList->size, 2);

    EXPECT_EQ(reversedList->get(0)->data, 11);

    EXPECT_EQ(reversedList->get(1)->data, 12);

    EXPECT_EQ(myList->size, 2);

    EXPECT_EQ(myList->get(0)->data, 12);

    EXPECT_EQ(myList->get(1)->data, 11);

}


/**
 * 测试链表合并
 */
TEST_F(ListTestFixture, testAddAll){

    myList->addFirst(11);
    myList->addFirst(12);

    auto mergeList = new LinkedList();
    mergeList->addFirst(21);
    mergeList->addFirst(22);

    myList->addAll(mergeList);

    delete mergeList;

    EXPECT_EQ(myList->size, 4);

    EXPECT_EQ(myList->get(0)->data, 12);

    EXPECT_EQ(myList->get(1)->data, 11);

    EXPECT_EQ(myList->get(2)->data, 22);

    EXPECT_EQ(myList->get(3)->data, 21);


}
