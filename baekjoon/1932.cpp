//
//  1932.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/28.
//

#include <iostream>
#include <cmath>
using namespace std;

int dp[501][501];
int tri[501][501];

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int tmp;
            scanf("%d", &tmp);
            tri[j][i] = tmp;
        }
    }
    
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[j][i-j+1] = max(dp[j-1][i-j+1], dp[j][i-j]) + tri[j][i];
        }
    }
    
    int max = 0;
    for(int i=1;i<=n;i++){
        if(dp[i][n-i+1] > max)
            max = dp[i][n-i+1];
    }
    
    printf("%d\n", max);
    
}
