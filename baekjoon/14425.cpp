//
//  14425.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/26.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


int main(){
    int N, M;
    int cnt = 0;
    scanf("%d %d", &N, &M);
    map<string, bool> m;
    vector<string> v;
    
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        m[s] = true;
    }
    for(int i=0;i<M;i++){
        string s2;
        cin>>s2;
        if(m[s2])
            cnt++;
    }
    printf("%d\n", cnt);
}
