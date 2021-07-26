//
//  11286.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/26.
//

#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct cmp{
    bool operator()(long a, long b){
        if(abs(a) > abs(b))
            return true;
        else if(abs(a) == abs(b)){
            if(a>b)
                return true;
            else
                return false;
        }
        return false;
    }
};

int main(){
    int N;
    scanf("%d", &N);
    priority_queue<long, vector<long>, cmp> pq;
    while(N--){
        long x;
        scanf("%ld", &x);
        if(x==0){
            if(pq.empty())
                printf("%d\n", 0);
            else{
                printf("%ld\n", pq.top());
                pq.pop();
            }
        }
        else{
            pq.push(x);
        }
    }
}
