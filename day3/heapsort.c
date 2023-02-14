#include "algorithm.h"
#include "../utils/utils.h"
#include "heaps.h"

void heapsort(int *nums,int size, int heapsize){
    buildminheap(nums, size, heapsize);
    for(int i = heapsize; i >= 0; i--){
        swap(&nums[0], &nums[i]);
        minheapify(nums, size, i, heapsize);
    }

}