#include "../common.h"
#include "algorithm.h"
#include "heaps.h"

void buildmaxheap(int *nums, int size, int heapsize){
    int lastnonleaf = PARENT(heapsize);
    for(int i = lastnonleaf; i >= 0; i--){
        maxheapify(nums, size, i, heapsize);
    }
}

void buildminheap(int *nums, int size, int heapsize){
    int lastnonleaf = PARENT(heapsize);
    for(int i = lastnonleaf; i >= 0; i--){
        minheapify(nums, size, i, heapsize);
    }
}