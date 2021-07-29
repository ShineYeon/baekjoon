//
//  11066.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/28.
//

//다음에 다시 보자...... 넘 어렵

#include <iostream>
using namespace std;
int dp[501][501];

void solution(int k, int cost[]){
    for(int i = 1;i<=k;i++){
        for(int j=1;j<=k;j++){
            if(i == j)
                dp[i][j] = cost[i];
            else if(j==i+1){
                dp[i][j] = dp[i][i] + cost[j];
            }
            else
                dp[i][j] = min(dp[i][i]+dp[i+1][j], dp[i][i+1]+cost[j]);
        }
    }
}

int main(){
    int T;  //테스트케이스
    scanf("%d", &T);
    while(T--){
        int K;
        scanf("%d", &K);
        dp[501][501] = {0,};
        int cost[501] = {0,};
        for(int i=1;i<=K;i++){
            int tmp;
            scanf("%d", &tmp);
            cost[i] = tmp;
        }
        solution(K, cost);
        printf("%d\n");
    }
}
