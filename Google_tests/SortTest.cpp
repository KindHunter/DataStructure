//
// Created by seven on 2020/7/11.
//

#include "gtest/gtest.h"
#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/InsertionSort.h"

class SortTestFixture: public ::testing::Test {

protected:
    BubbleSort *bubbleSort;
    InsertionSort *insertionSort;
    int * arr;
    int * arrDuplicate;
    int * oneElementArr;
    int arrSize;

    virtual void SetUp(){
        bubbleSort = new BubbleSort();
        arrSize = 5;
        arr = new int[5]{5, 4, 1, 3, 2};
        arrDuplicate = new int[5]{5, 5, 1, 1, 2};
        oneElementArr = new int[1]{1};

    }

    virtual void TearDown(){
        delete bubbleSort;
        delete [] arr;
    }

};



/**
 * 测试栈的基本功能
 */
TEST_F(SortTestFixture, testBubbleSort) {

    this->bubbleSort->sort(this->arr, this->arrSize);
    this->bubbleSort->sort(this->arrDuplicate, this->arrSize);
    for (int i = 0; i < this->arrSize - 1; ++i) {
        EXPECT_GE(arr[i + 1], arr[i]);
        EXPECT_GE(arrDuplicate[i + 1], arrDuplicate[i]);

    }
    this->bubbleSort->sort(this->oneElementArr, 1);


}/**
 * 测试栈的基本功能
 */
TEST_F(SortTestFixture, testInsertionSort) {

    this->insertionSort->sort(this->arr, this->arrSize);
    this->insertionSort->sort(this->arrDuplicate, this->arrSize);
    for (int i = 0; i < this->arrSize - 1; ++i) {
        EXPECT_GE(arr[i + 1], arr[i]);
        EXPECT_GE(arrDuplicate[i + 1], arrDuplicate[i]);

    }
    this->insertionSort->sort(this->oneElementArr, 1);


}