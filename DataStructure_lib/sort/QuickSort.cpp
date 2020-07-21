//
// Created by seven on 2020/7/14.
//

#include "QuickSort.h"
#include <iostream>

void QuickSort::sort(int *arr, int size) {
    if(size <= 1){
        return;
    }
    quickSort(arr, 0, size - 1);

}


/**
 * 这里的end和mergeSort的end不一样，这里的end，是最后一个序列的序号，是包含的
 * @param arr
 * @param start
 * @param end
 */
void QuickSort::quickSort(int *arr, int start, int end) {

    if (start >= end){
        return;
    }

    int pivot = partition(arr, start, end);
    /**
     * 这里必须把pivot剔除掉，一方面pivot已经在正确的位置上了，另一方面有可能死循环（中间点的正确位置是两边，就会进入无限递归）
     */
    quickSort(arr, start, pivot -1);
    quickSort(arr, pivot + 1, end);
}

int QuickSort::partition(int *arr, int start, int end) {
    int p = end;
    int less = start;
    for (int i = start; i < p; ++i) {
        if(arr[i] < arr[p]){
            std::swap(arr[i], arr[less]);
            ++less;
        }
    }
    std::swap(arr[less], arr[p]);
    return less;

}
