//
//  11057.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/30.
//

#include <iostream>
using namespace std;

int dp[10][1001];

int main(){
    int N;
    scanf("%d", &N);
    
    for(int i=0;i<10;i++){
        dp[i][1] = 1;
    }
    
    for(int i=2;i<=N;i++){
        for(int j=0;j<10;j++){
            if(j==0)
                dp[j][i] = 1;
            else{
                dp[j][i] = dp[j-1][i] + dp[j][i-1];
            }
            dp[j][i] %= 10007;
        }
    }
    
    int sum = 0;
    for(int i=0; i<10; i++){
        sum += dp[i][N];
        sum %= 10007;
    }
    
    printf("%d\n", sum % 10007);
}
