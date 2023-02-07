#include "common.h"
#include "utils/utils.h"
#include "day2/algorithm.h"

int main(void){
    // int len = 10;
    // int arr[] = {1, 0, -1, 22, 12, 3, 4, 19, 99, 10};
    // int *indexes = getIndex(arr, len);

    // printf("Original Array: ");
    // FOR(len){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    // FOR(len){
    //     printf("%d ", indexes[i]);
    // }
    // free(indexes);
    int lens[] = {20, 24, 30, 35, 50};
    printf("Max Comparisons: %d", maxComp(lens, 5));
}