#include "../common.h"

int max(int a, int b){
    return a > b ? a : b;
}

int getmaxcoins(int a[], int size){
    int b[size + 2];
    b[0] = 1;
    b[size + 1] = 1;
    for(int i = 1; i <= size; i++)
        b[i] = a[i-1];
    
    int dp[size + 2][size + 2];
    memset(dp, 0, sizeof(dp));
    for(int length = 1; length < size + 1; length++){
        for(int left = 1; left < size - length + 2; left++){
            int right = left + length - 1;
            for(int last = left; last < right + 1; last++){
                dp[left][right] = max(dp[left][right], dp[left][last - 1] + b[left - 1] * b[last] * b[right + 1] + dp[last + 1][right]);
            }
        }
    }
    return dp[1][size];
} 