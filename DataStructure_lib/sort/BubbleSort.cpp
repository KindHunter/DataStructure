//
// Created by seven on 2020/7/11.
//

#include "BubbleSort.h"

/**
 * 冒泡排序，意思是从头开始，拿 j 和 j+1 元素 进行比较，如果前面的元素大于后面的元素，那么就进行交换，就像冒泡一样，
 * 需要冒泡的次数，应该是数组的size - 1
 * @param arr
 * @param size
 */
void BubbleSort::sort(int *arr, int size) {
    if (size <= 1){
        return;
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i -1; ++j) {
            int first = arr[j];
            if (arr[j] > arr[j + 1]){
                arr[j] = arr[j + 1];
                arr[j + 1] = first;
            }
        }
    }
}
