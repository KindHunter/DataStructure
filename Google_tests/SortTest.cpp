//
// Created by seven on 2020/7/11.
//

#include "gtest/gtest.h"
#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/InsertionSort.h"
#include <chrono>
#include <random>

using namespace std;
using namespace chrono;

class SortTestFixture: public ::testing::Test {

protected:
    BubbleSort *bubbleSort;
    InsertionSort *insertionSort;
    int * arr;
    int * arrDuplicate;
    int * oneElementArr;
    int * randomArr;
    int randomArrSize;
    int arrSize;


    virtual int randomInt(){
        std::random_device rd; // 種子產生器
        std::mt19937 gen = std::mt19937(rd()); //使用mt19937引擎
        std::uniform_int_distribution<int> dis(0, 1000); //使用平均分佈

        auto randFun = std::bind(dis, gen); //將引擎和分佈綁在一起變成新函數 randfun

        return randFun();
    }

    virtual void SetUp(){
        bubbleSort = new BubbleSort();
        arrSize = 5;
        arr = new int[arrSize]{5, 4, 1, 3, 2};
        arrDuplicate = new int[arrSize]{5, 5, 1, 1, 2};
        oneElementArr = new int[1]{1};
        this->randomArrSize = 10000;
        randomArr = new int[randomArrSize];
        for (int i = 0; i < randomArrSize; ++i) {
            randomArr[i] = randomInt();
        }

    }

    virtual void TearDown(){
        delete bubbleSort;
        delete [] arr;
        delete [] oneElementArr;
        delete [] randomArr;
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

    auto beforeSort = system_clock::now();
    this->bubbleSort->sort(this->randomArr, this->randomArrSize);
    auto afterSort = system_clock::now();
    auto duration = duration_cast<microseconds>(afterSort - beforeSort);
    std::cout<< "bubbleSort elements timeConsumption:" << duration.count() << std::endl;

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

    auto beforeSort = system_clock::now();
    this->insertionSort->sort(this->randomArr, this->randomArrSize);
    auto afterSort = system_clock::now();
    auto duration = duration_cast<microseconds>(afterSort - beforeSort);
    std::cout<< "insertSort elements timeConsumption:" <<duration.count() << std::endl;


}