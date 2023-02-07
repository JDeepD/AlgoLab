#include "../common.h"
#include "time.h"

int* genRandomArr(int len, int lower, int upper){
    srand((unsigned int) time(NULL));
    int *randArr = (int *)calloc(len, sizeof(int));
    for(int i = 0; i < len; i++){
        randArr[i] = rand() % (upper - lower + 1) + lower;
    }
    return randArr;
}