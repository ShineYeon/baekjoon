//
//  2225.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/23.
//

#include <iostream>
using namespace std;

int main(){
    int N, K;
    scanf("%d", &N);
    scanf("%d", &K);
    
    long long dp[201][201]={0,};
    
    for(int i = 0;i<=N;i++){
        dp[1][i] = 1;
    }
    
    for(int i=2;i<=K;i++){
        for(int j=0;j<=N;j++){
            for(int k = 0; k<=j;k++){
                dp[i][j] += dp[i-1][k];
            }
            dp[i][j] = dp[i][j]%1000000000;
        }
    }
    
    cout<<dp[K][N]<<endl;
    
}
