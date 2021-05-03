//
//  2577.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/05/03.
//

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int x;
    x = a*b*c;
    int arr[10]={0,};
    while(x>0){
        arr[x%10]++;
        x/=10;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}
