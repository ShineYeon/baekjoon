//
//  7576.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/13.
//

#include <iostream>
#include <queue>
using namespace std;

int dx[4]={0, 0, 1, -1};
int dy[4]={1, -1, 0, 0};

int m, n, result = 0;
int tomato[1001][1001];
queue<pair<int, int>> q;

bool isIn(int x, int y){
    if(x>=0&&x<n&&y>=0&&y<m)
        return true;
    else
        return false;
}

void bfs(){
    while(!q.empty()){
        int oriY=q.front().first;
        int oriX=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int newX = oriX+dx[i];
            int newY = oriY+dy[i];
            if(isIn(newY, newX)==1 && tomato[newY][newX]==0){
                tomato[newY][newX]=tomato[oriY][oriX]+1;
                q.push(make_pair(newY, newX));
            }
                
        }
        
    }
}

int main(){
    scanf("%d %d", &m, &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &tomato[i][j]);
            if(tomato[i][j]==1)
                q.push(make_pair(i, j));
        }
    }
    bfs();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tomato[i][j]==0){
                printf("-1\n");
                return 0;
            }
            if(result<tomato[i][j]){
                result = tomato[i][j];
            }
        }
    }
    printf("%d\n", result-1);
    return 0;
    
}
