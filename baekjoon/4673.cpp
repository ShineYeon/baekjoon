//
//  4673.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/05/04.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    bool arr[10001] = {false, }; // false -> self number
    vector<int> arr2;
    
    int tmp = 1;
    for(int i = 1; i <= 10000; i++){
        if(arr[i] == false){
            tmp = i;
            arr2.push_back(i);
        }
        
        while(tmp <= 10000){
            tmp += (tmp/1000) + ((tmp/100)%10) + ((tmp/10)%10) + tmp % 10;
            if(tmp > 10000)
                break;
            else
                arr[tmp] = true;
        }
    }
    
    for(auto i:arr2){
        cout<<i<<endl;
    }
}
