//
// Created by seven on 2020/7/13.
//

#include "MergeSort.h"

void MergeSort::sort(int *arr, int size) {

    int * arrCopy = new int[size]();

    //数组拷贝
    this->arrCopy(arr, arrCopy, size);

    divideSort(arr, arrCopy, 0,  size);

    delete [] arrCopy;
}


void MergeSort::divideSort(int *arr, int *arrCopy, int start, int end) {

    int pivot = (start + end)/2;

    divideSort(arrCopy, arr, 0, pivot);

    divideSort(arrCopy, arr, pivot, end);

    mgSort(arr, arrCopy, 0, pivot, end);


}


void MergeSort::mgSort(int *arr, int *arrCopy, int start, int middle, int end){
    //arr 是我们本次想要排出正确顺序的数组
    //arrCopy 是之前已经在两个分区排好序的数组

}




/**
 * 数组copy
 * @param sourceArr
 * @param targetArr
 */
void MergeSort::arrCopy(int *sourceArr, int *targetArr, int size) {
    for (int i = 0; i < size; ++i) {
        targetArr[i] = sourceArr[i];
    }
}




