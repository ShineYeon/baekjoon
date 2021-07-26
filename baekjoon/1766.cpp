//
//  1766.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/26.
//

#include <iostream>
#include <queue>
using namespace std;

bool finished[32001] = {false, };

//first가 작은 것 우선
struct cmp{
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.first>b.first;
    }
};

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    int arr[32001] = {0,};
    while(M--){
        int a, b;
        scanf("%d %d", &a, &b);
        pq.push({a, b});
    }
    for(int i=1;i<=N;i++){
        if(arr[i] == 0){
            if(!finished[i]){
                printf("%d\n", i);
                finished[i] = true;
            }
            else
                continue;
        }
        else{
            if(!finished[arr[i]]){
                printf("%d ", arr[i]);
                finished[arr[i]]=true;
                printf("%d ", i);
                finished[i] = true;
            }
            else{
                if(!finished[i]){
                    printf("%d ", i);
                    finished[i] = true;
                }
                else
                    continue;
            }
        }
    }
}
