//
//  1149.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/28.
//

#include <iostream>
#include <cmath>
using namespace std;

#define INF 1000000

int cost[1001][4];
int dp[1001][4];

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=3;j++){
            scanf("%d", &cost[i][j]);
        }
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=3;j++){
            if(j==1){
                dp[i][j] = min(dp[i-1][2], dp[i-1][3]) + cost[i][1];
            }
            else if(j==2){
                dp[i][j] = min(dp[i-1][1], dp[i-1][3]) + cost[i][2];
            }
            else{   //j==3
                dp[i][j] = min(dp[i-1][1], dp[i-1][2]) + cost[i][3];
            }
        }
    }
    
    int min = INF;
    for(int i=1;i<=3;i++){
        if(dp[N][i] < min)
            min = dp[N][i];
    }
    printf("%d\n", min);
    
}
