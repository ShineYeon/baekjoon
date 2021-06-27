//
//  2667.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/27.
//

#include <iostream>
#include <algorithm>
using namespace std;
int house[26][26];
int countArr[323];
int N;
int r;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool range(int x, int y){
    return ((x<N&&x>=0) && (y<N&&y>=0));
}

void dfs(int x, int y, int key){
    
    house[x][y] = key;
    
    for(int i=0;i<4;i++){
        int a = x+dx[i];
        int b = y+dy[i];
        
        if(range(a, b) && house[a][b]==1){
            dfs(a, b, key);
        }
        
    }
}

void solution(int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(house[i][j]==1){
                r++;
                dfs(i, j, r+1);
            }
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(house[i][j]>1)
                countArr[house[i][j]-2]++;
        }
    }
}

int main(){
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%1d", &house[i][j]);
        }
    }
    solution(N);
    sort(countArr, countArr+r);
    
    printf("%d\n", r);
    for(int i=0;i<r;i++){
        printf("%d\n", countArr[i]);
    }
}
