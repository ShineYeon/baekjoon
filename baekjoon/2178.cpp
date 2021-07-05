//
//  2178.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/05.
//

#include <iostream>
#include <queue>
using namespace std;
int N, M;
int check[101][101];
char miro[101][101];
int visited[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int answer = 10001;



void bfs(int x, int y){
    visited[x][y] = 1;
    
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        for(int i=0;i<4;i++){
            int nextX = x+dx[i];
            int nextY = y+dy[i];
            
            if(nextX>=0 && nextY>=0 && nextX<N && nextY<M){
                if(miro[nextX][nextY] == '1' && visited[nextX][nextY] ==0){
                    check[nextX][nextY] = check[x][y] + 1;
                    visited[nextX][nextY] = 1;
                    q.push(make_pair(nextX, nextY));
                }
            }
        }
    }
    
}

int main(){
    
    scanf("%d %d", &N, &M);
    
    for(int i=0;i<N;i++){
        scanf("%s", miro[i]);
    }
    
    bfs(0, 0);
    
    printf("%d\n", check[N-1][M-1]+1);
}
