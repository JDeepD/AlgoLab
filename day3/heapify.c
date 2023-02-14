#include "../common.h"
#include "heaps.h"
#include "../utils/utils.h"

void maxheapify(int *nums, int size, int i, int heapsize){
    int left = LEFT(i);
    int right = RIGHT(i);
    int largest = i;
    if(left <= heapsize && nums[i] < nums[left])
        largest = left;
    if(right <= heapsize && nums[largest] < nums[right])
        largest = right;

    if(largest != i){
        swap(&nums[i], &nums[largest]);
        maxheapify(nums, size, largest, heapsize);
    }
}

void minheapify(int *nums, int size, int i, int heapsize){
    int left = LEFT(i);
    int right = RIGHT(i);
    int smallest = i;
    if(left <= heapsize && nums[i] > nums[left])
        smallest = left;
    if(right <= heapsize && nums[smallest] > nums[right])
        smallest = right;

    if(smallest != i){
        swap(&nums[i], &nums[smallest]);
        minheapify(nums, size, smallest, heapsize);
    }
}