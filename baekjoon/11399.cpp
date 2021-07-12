//
//  11399.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/12.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n;
    scanf("%d", &n);
    vector<int> v;
    for(int i = 0;i<n;i++){
        int tmp;
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    
    sort(v.begin(), v.begin()+n);
    
    int tmp = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        tmp+=v[i];
        ans+=tmp;
    }
    printf("%d\n", ans);
    
    
}
