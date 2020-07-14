//
// Created by seven on 2020/7/13.
//

#ifndef DATASTRUCTURE_MERGESORT_H
#define DATASTRUCTURE_MERGESORT_H


class MergeSort {

public:
    void sort(int * arr, int size);

private:
    void arrCopy(int *sourceArr, int *targetArr, int size);

    void divideSort(int *arr, int *arrCopy, int start, int end);

    void mgSort(int *arr, int *arrCopy, int start, int middle, int end);
};


#endif //DATASTRUCTURE_MERGESORT_H
