//
// Created by seven on 2020/7/12.
//

#include "ShellSort.h"
#include <iostream>

void ShellSort::sort(int *arr, int size) {
    int step = 1;
    int decreaseFactor = 3;
    //计算出最优的其实步长，后面步长都会每次取三分之一
    while(step < size / decreaseFactor){
        step = decreaseFactor * step + 1;
    }

    while(step >= 1){
        for (int i = step; i < size; ++i) {
            for (int j = i; j >= step && arr[j] < arr[j - step]; j = j - step) {
                std::swap(arr[j], arr[j - step]);
            }

        }
        step = step / decreaseFactor;
    }





}
