//
//  2156.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/28.
//

#include <iostream>
using namespace std;

int drink[10001];
int dp[10001];

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &drink[i]);
    }
    
    dp[0] = 0;
    dp[1] = drink[1];
    dp[2] = drink[1] + drink[2];
    
    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1];
        if(dp[i] < dp[i-2] + drink[i])
            dp[i] = dp[i-2] + drink[i];
        if(dp[i] < dp[i-3] + drink[i-1] + drink[i])
            dp[i] = dp[i-3] + drink[i-1] + drink[i];
    }
    
    printf("%d\n", dp[n]);
}
