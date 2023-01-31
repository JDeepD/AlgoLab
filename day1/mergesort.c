#include "../common.h"

void merge(int *arr, int left, int mid, int right){
    int size1 = mid - left + 1;
    int size2 = right - mid;
    int arr1[size1];
    int arr2[size2];

    for(int i = 0; i < size1; i++)
        arr1[i] = arr[left + i];
    
    for(int i = 0; i < size2; i++)
        arr2[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    while(i  < size1 && j < size2){
        if(arr1[i] <= arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }
    while(i < size1)
        arr[k++] = arr1[i++];

    while(j < size2)
        arr[k++] = arr2[j++];
}

void mergesort(int *arr, int left, int right){
    if (left < right){
        int mid = (left + right)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }

}