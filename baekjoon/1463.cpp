//
//  1463.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/30.
//

#include <iostream>
#include <cmath>
using namespace std;

int dp[1000001];

int main(){
    int N;
    scanf("%d", &N);
    
    dp[1] = 0;
    
    for(int i=2;i<=N;i++){
        dp[i] = dp[i-1] + 1;
        if(i%3 == 0){
            dp[i] = min(dp[i], dp[i/3] + 1);
        }
        if(i%2 == 0){
            dp[i] = min(dp[i], dp[i/2] + 1);
        }
        
    }
    printf("%d\n", dp[N]);
}
