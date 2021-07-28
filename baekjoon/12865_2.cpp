//
//  12865_2.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/27.
//

#include <iostream>
using namespace std;

int weights[101];
int values[101];
int dp[101][100001];

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    for(int i=1;i<=N;i++){
        int w, v;
        scanf("%d %d", &w, &v);
        weights[i] = w;
        values[i] = v;
    }
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            if(j-weights[i]>=0){    //넣을수 있는 상황
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weights[i]]+values[i]);
            }
            else{//넣을 수 없는 상황
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    
    printf("%d\n", dp[N][K]);
}
