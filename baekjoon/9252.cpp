//
//  9252.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/07/27.
//

#include <iostream>
#include <vector>
using namespace std;

int dp[1001][1001];
int visited[1001];

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    
   vector<char> ans;
    for(int i=1;i<=s1.size();i++){
        for(int j=1;j<=s2.size();j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
                
            else
                dp[i][j] =max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    int i = s1.size();
    int j = s2.size();
    while(i>=1 && j>=1){
        if(dp[i][j] == dp[i-1][j])
            i--;
        else if(dp[i][j] == dp[i][j-1])
            j--;
        else{
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
    }
    
    
    printf("%d\n", dp[s1.size()][s2.size()]);
    for(int k=1;k<=ans.size();k++){
        cout<<ans[ans.size()-k];
    }
    printf("\n");
}
