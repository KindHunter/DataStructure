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
        //如果像我写的比较顺序，就是把交换的操作，全部积累到最后
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
