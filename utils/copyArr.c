#include "../common.h"

int* copyArr(int *from, int len){
    int *to = (int *)calloc(len, sizeof(int));
    for(int i = 0; i < len; i++)
        to[i] = from[i];
    
    return to;
}