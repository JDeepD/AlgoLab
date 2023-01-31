#include "common.h"
#include "day1/algorithm.h"

int main(void){
    int arr[5] = {1, 4, 5, -2, -8};
    printf("%d\n", binarysearch(arr, 5, 5));
    mergesort(arr, 0, 4);
    FOR(5)
        printf("%d ", arr[i]);

}