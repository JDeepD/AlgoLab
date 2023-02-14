#include "../common.h"
#include "../utils/utils.h"
#include "algorithm.h"


/* heapsize is a pointer to ensure global changes */
int extractMax(int *nums, int *heapsize){
    int maxn = nums[0];
    swap(&nums[0], &nums[(*heapsize)--]);
    return maxn;
}

int extractMin(int *nums, int *heapsize){
    int minn = nums[0];
    swap(&nums[0], &nums[(*heapsize)--]);
    return minn;
}