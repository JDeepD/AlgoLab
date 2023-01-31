#include "../common.h"

int linearsearch(int *arr, int key, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}