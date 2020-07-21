//
// Created by seven on 2020/7/21.
//

#ifndef DATASTRUCTURE_BINARYSEARCH_H
#define DATASTRUCTURE_BINARYSEARCH_H


class BinarySearch {

public:
    int search(int *sortedArr, int size, int value);

private:
    int internallySearch(int *sortedArr, int start,  int end, int value);

};


#endif //DATASTRUCTURE_BINARYSEARCH_H
