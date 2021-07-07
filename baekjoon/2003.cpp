//
//  2003.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/07.
//

#include <iostream>
using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10001];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==m)
                cnt++;
            else if(sum>m)
                break;
        }
    }
    printf("%d\n", cnt);
}
