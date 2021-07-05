//
//  1012.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/29.
//

#include <iostream>
using namespace std;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int arr[51][51];
int visited[51][51];

void dfs(int M, int N, int x, int y){
    if(visited[x][y] == 1)
        return;
    visited[x][y] = 1;
    for(int i=0;i<4;i++){
        int nextX = x+dx[i];
        int nextY = y+dy[i];
        if(arr[nextX][nextY] == 1 && visited[nextX][nextY] == 0)
            dfs(M, N, nextX, nextY);
    }
    
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        for(int i=0;i<51;i++){
            for(int j=0;j<51;j++){
                arr[i][j]=0;
            }
        }
        for(int i=0;i<51;i++){
            for(int j=0;j<51;j++){
                visited[i][j]=0;
            }
        }
        
        int M, N, K;
        scanf("%d", &M);
        scanf("%d", &N);
        scanf("%d", &K);
        while(K--){
            int X, Y;
            scanf("%d", &X);
            scanf("%d", &Y);
            arr[X][Y] = 1;
        }
        int cnt = 0;
        for(int i =0;i<M;i++){
            for(int j = 0 ;j<N;j++){
                if(arr[i][j] == 1 && visited[i][j] == 0){
                    cnt++;
                    dfs(M, N, i, j);
                   
                }
            }
        }
        cout<<cnt<<endl;
        
    }
}
