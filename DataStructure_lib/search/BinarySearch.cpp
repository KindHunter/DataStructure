//
// Created by seven on 2020/7/21.
//

#include "BinarySearch.h"

/**
 * 二分查找法
 * @param sortedArr
 * @param size
 * @param value
 * @return
 */
int BinarySearch::search(int *sortedArr, int size, int value) {
    if (size <= 0){
        return -1;
    }
    return internallySearch(sortedArr,0 , size-1, value);
}

int BinarySearch::internallySearch(int *sortedArr, int start, int end, int value) {
    if (start > end){
        return -1;
    }
    int middle = start +((end - start) >> 1);
    if (sortedArr[middle] == value){
        return middle;
    } else if (sortedArr[middle] > value){
        return internallySearch(sortedArr, start, middle - 1, value);
    } else {
        return internallySearch(sortedArr, middle + 1, end, value);
    }

}

int BinarySearch::searchFirst(int *sortedArr, int size, int value) {
    if (size <= 0){
        return -1;
    }
    int index = internallySearch(sortedArr,0 , size-1, value);

    if(index >0){
        for (int i = index -1; i >= 0 ; --i) {
            if(sortedArr[i] == value){
                index = i;
            } else {
                break;
            }
        }
    }
    return index;
}
