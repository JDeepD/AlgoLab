#include "../common.h"
#include "algorithm.h"

int maxComp(int *arr, int size) {
    int comp = 0;
    for(int i = 0; i < size - 1; i++){
        comp += arr[0] + arr[1] - 1;
        arr[0] += arr[1];
        arr[1] = INT_MAX;
        insertionSort(arr, size);
    } 
    return comp;
}