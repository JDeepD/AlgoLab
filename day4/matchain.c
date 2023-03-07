#include "../common.h"

int min(int x, int y){
    return x <= y ? x : y;
}

int matchainmult(int *p, int size){
    int n = size - 1;
    int dp[n][n];
    for(int w = n; w > 0; w--){
        int q = n - w;
        for(int j = n; j > q; j--){
            int i = j - q - 1;
            dp[i][j] = INT_MAX;
            for(int k = i; k < j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i] * p[k+1] * p[j+1]);
            }
        }
    }
    return dp[1][n];
}