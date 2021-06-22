//
//  1874.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/22.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int tmp;
    vector<int> v;
    
    vector<char> v2;
    for(int i= 0 ;i<n;i++){
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    
    int cnt = 1;
    int cnt2 = 0;
    
    stack<int> s;
    s.push(1);
    v2.push_back('+');
    cnt=2;
    while(cnt2<n){
        if(s.empty() || s.top() < v[cnt2]){
            while(cnt <= v[cnt2]){
                s.push(cnt);
                v2.push_back('+');
                
                cnt++;
            }
            
        }
        else if(s.top() == v[cnt2]){
            v2.push_back('-');
            s.pop();
            cnt2++;
        }
        else if(s.top() > v[cnt2]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    for(auto i:v2){
        printf("%c\n", i);
    }
    
    
}
