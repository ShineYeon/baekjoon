//
//  2606.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/24.
//

#include <iostream>
#include <vector>
using namespace std;

int visited[101];
vector<int> connected[101];
int cnt = 0;

void dfs(int i){
    if(visited[i] == 1)
        return;
    visited[i] = 1;
    cnt++;
    for(int j = 0; j < connected[i].size(); j++){
        dfs(connected[i][j]);
    }
}



int main(){
    int n;  //# of computers
    int con;    //# of connected
    scanf("%d", &n);
    scanf("%d", &con);
    
    for(int i=0; i<con; i++){
        int a, b;
        cin>>a>>b;
        connected[a].push_back(b);
        connected[b].push_back(a);
    }
    dfs(1);
    cnt--;
    printf("%d\n", cnt);
        
}
