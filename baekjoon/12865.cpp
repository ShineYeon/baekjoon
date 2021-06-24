//
//  12865.cpp
//  baekjoon
//
//  Created by 최희연 on 2021/06/23.
//

#include <iostream>
#include <vector>
using namespace std;

int ans[100][100001];

int main()
{
    int n, m, a, b;
    vector<pair<int, int>> weigth_profit;
    
    //n : 물품 수, m: 무게
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)    {
        cin >> a >> b;
        weigth_profit.push_back({ a,b });
    }
    
    //ans[a][b] = c --> 가방안에 a개 물품이 있고, 무게가 b라고 했을 때의 총 가치 c
    for (int i = 0; i < n; i++)    {    // 가방 안 물품 수 (현재 넣으려는 물품)
        for (int j = 0; j <= m; j++){   // 가방의 무게
            if (i == 0)
            {
                if (weigth_profit[i].first <= j)
                    ans[i][j] = weigth_profit[i].second;
                continue;
            }
            //넣으려는 물건의 무게가 가방의 무게보다 작거나 같아야 된다.
            if (weigth_profit[i].first <= j)
                ans[i][j] = max(ans[i - 1][j], weigth_profit[i].second + ans[i - 1][j - weigth_profit[i].first]);
            else
                ans[i][j] = ans[i - 1][j];
        }
    }
    cout << ans[n - 1][m];
    return 0;
}

