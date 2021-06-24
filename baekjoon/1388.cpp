//
//  1388.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/24.
//

#include <iostream>
using namespace std;

int N, M;
char floor[101][101]={' ',};
bool visited[101][101] = {false,};
int type = 0;   // 0이면 -, 1이면 |
int cnt = 0;

void dfs(int y, int x){
    if(y>=N || x>=M)
        return;
    if(visited[y][x])
        return;
    
    if(type == 0){
        if(floor[y][x] != '-')
            return;
    }
    else{
        if(floor[y][x]!='|')
            return;
    }
    visited[y][x] = true;
    
    if(type == 0){
        dfs(y, x+1);
    }
    else{
        dfs(y+1, x);
    }
    
    
}

int main(){

    scanf("%d", &N);
    scanf("%d", &M);
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>floor[i][j];
        }
    }
    if(floor[0][0] == '-')
        type = 0;
    else
        type = 1;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(visited[i][j] == false){
                cnt++;
                if(floor[i][j] == '-') type = 0;
                else type = 1;
                dfs(i, j);
            }
        }
    }
    
    printf("%d\n", cnt);
}
