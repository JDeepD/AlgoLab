#include "../common.h"

int binarysearch(int *arr, int key, int size){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] > key)
            right = mid-1;
        if(arr[mid] < key)
            left = mid+1;
    }
    return -1;

}