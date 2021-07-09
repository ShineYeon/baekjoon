//
//  11651.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/09.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int>b){
    if(a.second==b.second)
        return a.first<b.first;
    else
        return a.second<b.second;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int tmp1, tmp2;
        scanf("%d %d", &tmp1, &tmp2);
        v.push_back(make_pair(tmp1, tmp2));
    }
    sort(v.begin(), v.end(), comp);
    
    for(int i=0;i<v.size();i++){
        printf("%d %d\n", v[i].first, v[i].second);
    }
}
