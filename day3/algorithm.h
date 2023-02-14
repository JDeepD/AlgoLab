#ifndef DAY3
#define DAY3

void maxheapify(int *nums, int size, int i, int heapsize);
void minheapify(int *nums, int size, int i, int heapsize);
void buildmaxheap(int *nums, int size, int heapsize);
void buildminheap(int *nums, int size, int heapsize);
int extractMax(int *nums, int *heapsize);
int extractMin(int *nums, int *heapsize);
void heapsort(int *nums, int size, int heapsize);
int connectropes(int *nums, int size, int heapsize);

#endif