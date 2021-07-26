//
//  1269.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/26.
//

#include <iostream>
#include <map>
using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    map<int, bool> m;
    for(int i=0;i<a;i++){
        int k;
        scanf("%d", &k);
        m[k] = true;
    }
    int cnt = 0;
    for(int i=0;i<b;i++){
        int k;
        scanf("%d", &k);
        if(m[k])
            cnt++;
    }
    printf("%d\n", a+b-(cnt*2));
}
