#include "common.h"
#include "day1/algorithm.h"

int main(void){
    int arr[5] = {1, 4, 5, -2, -8};
    mergesort(arr, 0, 4);
    // for(int i = 0; i < 5; i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    FOR(5){
        printf("%d ", arr[i]);
    }

}