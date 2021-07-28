//
//  1715.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/27.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int cnt = 0;
    int N;
    scanf("%d", &N);
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0;i<N;i++){
        int a;
        scanf("%d", &a);
        pq.push(a);
    }
    
    for(int i = 1;i<N;i++){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int sum = a+b;
        cnt+=sum;
        pq.push(sum);
    }
    
    printf("%d\n", cnt);
    pq.pop();
    return 0;
}
