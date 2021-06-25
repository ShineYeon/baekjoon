//
//  5639.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/25.
//

#include <iostream>
#include <algorithm>
using namespace std;

int arr[10010], idx;

void postOrder(int l, int r){
    if(l > r)
        return;
    
    int root = l;
    int s = l;
    int e = r;
    while(arr[s]>=arr[root])
        s++;
    while(arr[e]>arr[root])
        e--;
    postOrder(s, e);
    postOrder(e+1, r);
    printf("%d\n", arr[root]);
    
    
}

int main(){
    
    int n;
    while (scanf(" %d", &n) != -1) arr[idx++] = n;
    
    postOrder(0, idx-1);
    
    
}
