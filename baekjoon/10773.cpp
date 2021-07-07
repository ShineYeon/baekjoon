//
//  10773.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/07.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int k;
    scanf("%d", &k);
    
    stack<int> s;
    while(k--){
        int tmp;
        cin>>tmp;
        if(tmp==0){
            s.pop();
        }
        else
            s.push(tmp);
    }
    int sum = 0 ;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout<<sum<<endl;
}
