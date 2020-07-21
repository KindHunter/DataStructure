//
// Created by seven on 2020/7/21.
//

#include "gtest/gtest.h"
#include <iostream>
#include <chrono>
#include <random>
#include "sort/MergeSort.h"
#include "search/BinarySearch.h"


class SearchTestFixture: public ::testing::Test{
protected:
    int *sortedArr;
    int arrSize;
    int *randomSortedArr;
    int randomSize;
    BinarySearch * binarySearch;
    MergeSort *mergeSort;
    virtual int randomInt(){
        std::random_device rd; // 種子產生器
        std::mt19937 gen = std::mt19937(rd()); //使用mt19937引擎
        std::uniform_int_distribution<int> dis(0, 1000); //使用平均分佈

        auto randFun = std::bind(dis, gen); //將引擎和分佈綁在一起變成新函數 randfun

        return randFun();
    }

    virtual void SetUp(){
        this->mergeSort = new MergeSort();
        this->randomSize = 1000;
        randomSortedArr = new int[randomSize];
        for (int i = 0; i < randomSize; ++i) {
            randomSortedArr[i] = randomInt();
        }
        binarySearch = new BinarySearch();
        this->arrSize = 5;
        sortedArr = new int[arrSize]{1,2,2,3,4};
    }

    virtual void TearDown(){
        delete [] randomSortedArr;
        delete [] sortedArr;
        delete mergeSort;
        delete binarySearch;
    }
};


TEST_F(SearchTestFixture, searchBasic){
    EXPECT_EQ(binarySearch->search(sortedArr, arrSize, 3), 3);
    EXPECT_EQ(binarySearch->search(sortedArr, arrSize, 4), 4);
    EXPECT_EQ(binarySearch->search(sortedArr, arrSize, 1), 0);
    EXPECT_EQ(binarySearch->search(sortedArr, arrSize, 2), 2);




}