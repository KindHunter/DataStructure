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
        //这里有另一种比较顺序，是从i-1开始，往前，这样如果if条件成绩就直接交换元素，类似反向的冒泡
        // （冒泡，每次需要比较的元素会越来越少，插入算法，则是每次需要比较的元素越来越多，这是因为冒泡进行的是全局排序，插入进行的是局部排序）


        int compareValue = arr[i];
        int j = i -1 ;
        for (; j >= 0; --j) {
            //
            if (compareValue < arr[j]){
                arr[j + 1] = arr[j];

            } else {
                break;
            }
        }
        arr[j + 1] = compareValue;
    }

}
