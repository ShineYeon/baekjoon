//
//  10093.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/08.
//

#include <iostream>
using namespace std;

int main(){
    long long a, b;
    cin>>a>>b;
    
    if(a==b){
        cout<<0<<endl;
        return 0;
    }
    
    else{
        if(a>b){
            long long tmp = b;
            b=a;
            a=tmp;
        }
        
        
        cout<<b-a-1<<endl;
        
        for(long long i=a+1;i<b;i++){
            cout<<i<<" ";
        }
        printf("\n");
    }
}
