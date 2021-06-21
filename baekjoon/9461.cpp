//
//  9461.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/21.
//

#include <iostream>
using namespace std;

long long arr[101];

long long pado(int n){
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    if( n > 3 ){
        if(arr[n-2] == 0)
            arr[n-2] = pado(n-2);
        if(arr[n-3] == 0)
            arr[n-3] = pado(n-3);
        arr[n] = arr[n-2] + arr[n-3];
    }
    return arr[n];
}

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<pado(n)<<endl;
    }
}
