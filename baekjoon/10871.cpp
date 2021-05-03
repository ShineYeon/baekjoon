//
//  main.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/05/03.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, x;
    cin >> n >> x;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(a<x)
            cout<<a<<" ";
    }
    cout << endl;
}
