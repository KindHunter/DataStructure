//
// Created by seven on 2020/7/14.
//

#ifndef DATASTRUCTURE_QUICKSORT_H
#define DATASTRUCTURE_QUICKSORT_H


class QuickSort {

public:

    void sort(int * arr, int size);

private:
    int partition(int * arr, int start, int end);

    void quickSort(int *arr, int start, int end);
};


#endif //DATASTRUCTURE_QUICKSORT_H
