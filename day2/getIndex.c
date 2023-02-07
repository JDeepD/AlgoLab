#include "../common.h"

int *getIndex(int *arr, int len){
    int *new = (int *)calloc(len, sizeof(int));
    for(int i = 0; i < len; i++){
        int count = -1;
        for(int j = 0; j < len; j++){
            if(arr[i] >= arr[j]) count++;
        }
        new[i] = count; 
    }
    return new;
}