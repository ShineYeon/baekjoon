//
//  1766.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/26.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, M;
vector<int> connected[32001];
int edges[32001];

void solution(){
    
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=1;i<=N;i++){
        if(edges[i]==0)
            q.push(i);
    }
    
    for(int j=1;j<=N;j++){
        int tmp = q.top();
        printf("%d ", tmp);
        q.pop();
        
        for(int i = 0;i<connected[tmp].size();i++){
            edges[connected[tmp][i]] -= 1;
            if(edges[connected[tmp][i]] == 0)
                q.push(connected[tmp][i]);
            
        }
    }
    
}

int main(){
    scanf("%d %d", &N, &M);
    
    for(int i=1;i<=M;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        connected[a].push_back(b);
        edges[b]++;
    }
    
    solution();
    
}
