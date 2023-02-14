#include "common.h"
#include "utils/utils.h"
#include "day3/algorithm.h"

int main(void){
    /* q1: Algo 1 */
    int nums[] = { 5, 4, 2, 8 };
    int size = sizeof(nums)/sizeof(nums[0]);
    int heapsize = size - 1;
    // printf("Min Cost of connecting ropes: %d ", connectropes(nums, size, heapsize));

    /* q2: Algo 1 */
    // Sorted: 2, 4, 5, 9, 11, 12, 14, 44
    /*
    int nums[] = { 2, 44, 12, 5, 14, 9, 11, 4};
    int k = 4;
    int size = sizeof(nums)/sizeof(nums[0]);
    int heapsize = size - 1;
    heapsort(nums, size, heapsize);
    printf("The %dth smallest element is %d", k, nums[k-1]);
    */

    /* q2(Kth smallest): Algo 2 */
    int ans;
    int k = 4;
    buildminheap(nums, size, heapsize);
    for(int i = 0; i < k; i++){
        ans = extractMin(nums, &heapsize);
        minheapify(nums, size, 0, heapsize);
    }
    printf("The %dth smallest element is %d", k, ans);
}