#include "../common.h"

int matrixchainorder(int p[], int i, int j){
    if(i == j) return 0;
    int k;
    int min = INT_MAX;
    int count;
    for(k = i; k < j; k++){
        count = matrixchainorder(p, i, k) + matrixchainorder(p, k+1, j) + p[i-1] * p[k] * p[j];
        if(count < min) min = count;
    }
    return min;
}