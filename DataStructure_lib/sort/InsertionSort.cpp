//
// Created by seven on 2020/7/11.
//

#include "InsertionSort.h"


/**
 * 本质上是遍历每个元素，和数组前部的有序部分进行一一比较，找到合适的位置，进行插入
 * 所以这里有两部分逻辑，一是，寻找合适的位置，二是，进行插入，插入意味着，需要把部分元素往后推
 * 可以想见，最后会把大的元素都有序的推到数组后部
 * @param arr
 * @param size
 */
void InsertionSort::sort(int *arr, int size) {
    if (size <= 1){
        return;
    }

    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            //arr[i] < arr[j]意味着，从j到i-1位置上所有元素都比arr[i]要大，arr[i]这个值不需要继续进行比较下去了
            if (arr[i] < arr[j]){
                //需要吧arr[i]这个值，插入到j的位置，那么我们需要吧从j到i-1位置所有元素都往后推一位，因为他们都比较大
                int insertValue = arr[i];
                int insertPosition = j;
                int fromPosition = i;
                for (int k = fromPosition; k > insertPosition ; --k) {
                    arr[k] = arr[k -1];
                }
                arr[insertPosition] = insertValue;
                break;
            }
        }
    }

}
