//
//  11724.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/27.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int par[1001];
int visited[1001];
int cnt[1001];
vector<int> con[1001];

void dfs(int n, int parent){
    visited[n] = 1;
    if(parent == 0){
        parent = n;
        par[n] = n;
    }
    else
        par[n] = parent;
    for(int i=0;i<con[n].size();i++){
        if(visited[con[n][i]]==0){
            dfs(con[n][i], parent);
        }
    }
}


int main(){
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    
    for(int i=0;i<M;i++){
        int a, b;
        cin>>a>>b;
        con[a].push_back(b);
        con[b].push_back(a);
    }
    
    for(int i =0; i<N; i++){
        sort(con[i].begin(), con[i].end());
    }
    
    for(int i=1;i<=N;i++){
        if(visited[i] == 0)
            dfs(i, 0);
    }
    
    for(int i=1;i<=N;i++){
        cnt[par[i]]++;
    }
    
    int count = 0;
    for(int i=1;i<=N;i++){
        if(cnt[i]!=0)
            count++;
    }
    printf("%d\n", count);
    
}
