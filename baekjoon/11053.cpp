//
//  11053.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/22.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
 
    int arr[1001] = {0,};
 
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
            
    }
    int max = 0;
    int arr2[1001] = {0, };
    for(int i = 0;i<n;i++){
        int tmp = 0;
        for(int j = 0;j<i;j++){
            if(arr[j]<arr[i]){
                if(arr2[j]>tmp)
                    tmp = arr2[j];
            }
        }
        arr2[i] = tmp + 1;
        if(max<arr2[i])
            max = arr2[i];
    }
    
    
    printf("%d\n", max);
    
    
}
