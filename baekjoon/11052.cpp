//
//  11052.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/29.
//

#include <iostream>
using namespace std;

int card[1001];
int dp[1001];

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        scanf("%d", &card[i]);
    }
    
    dp[1] = card[1];
    
    for(int i=2;i<=N;i++){
        
        for(int j=1;j<=i;j++){
            dp[i] = max(dp[i], dp[i-j] + card[j]);
        }
        
    }
    
    printf("%d\n", dp[N]);
    
}
