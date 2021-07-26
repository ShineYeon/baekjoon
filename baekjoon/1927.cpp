//
//  1927.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/26.
//

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;


int main(){
    int N;
    scanf("%d", &N);
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0;i<N;i++){
        int x;
        scanf("%d", &x);
        if(x==0){
            if(q.empty())
                printf("%d\n", 0);
            else{
                printf("%d\n", q.top());
                q.pop();
            }
        }
        else{
            q.push(x);
        }
    }
}
