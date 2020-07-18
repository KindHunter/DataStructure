//
// Created by seven on 2020/7/13.
//

#include "MergeSort.h"

void MergeSort::sort(int *arr, int size) {
    if(size == 0){
        return;
    }

    int * arrCopy = new int[size]();

    //数组拷贝
    this->arrCopy(arr, arrCopy, size);

    divideSort(arr, arrCopy, 0,  size);

    delete [] arrCopy;
}

/**
 * 递归方法，divide，不断的往下分。start end 的原则是包头不包尾
 * @param arr
 * @param arrCopy
 * @param start 包含
 * @param end 不包含
 */
void MergeSort::divideSort(int *arr, int *arrCopy, int start, int end) {

    if(start >= end - 1){
        return;
    }

    int pivot = (start + end)/2;
    //这里的arrCopy arr的参数顺序每次递归都调换一下，是因为，我们每次都只需要一个指定区间排好序的数组，另一个当做需要存储的数组
    divideSort(arrCopy, arr, 0, pivot);

    divideSort(arrCopy, arr, pivot, end);

    mgSort(arr, arrCopy, 0, pivot, end);


}


void MergeSort::mgSort(int *arr, int *arrCopy, int start, int middle, int end){
    //arr 是我们本次想要排出正确顺序的数组
    //arrCopy 是之前已经在两个分区排好序的数组
    int preIndex = start;
    int sufIndex = middle;
    for (int i = start; i < end; ++i) {
        //这里的if判断逻辑有点复杂，是因为，前半段区间， 和后半段区间，都有可能先结束，
        // 如果有一个先结束（另一个数组的值相对较大），那么后面只需要将另一个数组的值全部copy过来就行了
        if(preIndex < middle && (sufIndex == end || arrCopy[preIndex] < arrCopy[sufIndex])){
            arr[i] = arrCopy[preIndex];
            ++preIndex;
        } else {
            arr[i] = arrCopy[sufIndex];
            ++sufIndex;
        }
    }

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




