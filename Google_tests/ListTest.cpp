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

TEST_F(ListTestFixture, TestList){
    //链表


    myList->addFirst(11);
    myList->addFirst(12);
    myList->addFirst(13);
    myList->addFirst(14);
    myList->addLast(15);

    EXPECT_EQ(myList->size, 5);

    EXPECT_TRUE(myList->remove(0));

    EXPECT_EQ(myList->size, 4);

    EXPECT_FALSE(myList->contains(14));

    EXPECT_TRUE(myList->contains(15));

    for (int i = 0; i < myList->size; ++i) {
        EXPECT_TRUE(myList->remove(0));
    }
}
