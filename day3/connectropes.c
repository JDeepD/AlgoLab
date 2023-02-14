#include "algorithm.h"
#include "../common.h"

int getCost(int *nums, int size, int heapsize){
    int cost = 0;
    int min;
    while(heapsize > 0){
        min = extractMin(nums, &heapsize);
        cost += min;
        minheapify(nums, size, 0, heapsize);
    }
    return cost;
}

int connectropes(int *nums, int size, int heapsize){
    buildminheap(nums, size, heapsize);
    int mincost = 0;
    for(int i = 0; i <= heapsize - 1; i++){
        mincost += getCost(nums, size, heapsize);
    }
    return mincost;
}