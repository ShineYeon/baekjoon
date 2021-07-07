//
//  11659.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/07.
//

#include <iostream>
using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100001];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        arr[i+1] = arr[i]+a;
    }
    while (m--) {
        int i, j;
        scanf("%d %d", &i, &j);
        int sum = arr[j]-arr[i-1];
        printf("%d\n", sum);
    }
}
