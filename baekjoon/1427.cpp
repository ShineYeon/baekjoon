//
//  1427.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/07.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    string n;
    cin>>n;
    for(int i=0; i<n.size();i++){
        for(int j = i;j<n.size();j++){
            if(n[j]>n[i]){
                int tmp = n[j];
                n[j]=n[i];
                n[i] = tmp;
            }
        }
    }
    cout<<n<<endl;
}
