//
//  2607.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/09.
//

#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}

int lcm(int a, int b, int greatCommonDivisor){
    return (a*b)/greatCommonDivisor;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int greateCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b, greateCommonDivisor);
    
    printf("%d\n%d", greateCommonDivisor, leastCommonMultiple);
}
