#include "../common.h"

void insertionSort(int *arr, int size){
    for (int i = 1; i < size; i++){
        int val = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > val){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = val;
    }
}