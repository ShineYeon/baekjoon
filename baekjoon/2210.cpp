//
//  2210.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/25.
//

#include <iostream>
#include <vector>
using namespace std;

int board[6][6] = {0,};
int ans = 0;
bool nums[1000000] = {0,};


void dfs(int x, int y, int cnt, int number){
    if(cnt==6){
        if(nums[number] == false){
            nums[number] = true;
            ans++;
        }
        return;
    }
    if(x>=5 || y>=5 || x<0 || y<0)
        return;
    
    number = (number*10) + board[x][y];
    cnt++;
    
    //up
    if(x+1 < 5)
        dfs(x+1, y, cnt, number);
    
    //down
    if(x-1 >= 0)
        dfs(x-1, y, cnt, number);
    
    //left
    if(y-1 >= 0)
        dfs(x, y-1, cnt, number);
    
    //right
    if(y+1 < 5)
        dfs(x, y+1, cnt, number);
    
    
}

int main(){
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            cin>>board[i][j];
        }
    }
    
    int cnt = 0;
    int number = 0;
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            dfs(i, j, cnt, number);
        }
    }
    
    printf("%d\n", ans);
    
}
