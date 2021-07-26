//
//  11279.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/26.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    priority_queue<int> pq;
    for(int i = 0;i<N;i++){
        int x;
        scanf("%d", &x);
        if(x==0){
            if(pq.empty())
                printf("%d\n", 0);
            else{
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else{
            pq.push(x);
        }
    }
}
