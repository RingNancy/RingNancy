#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dp[1005][1005] = {0};//0表示不可以装下，1表示可以装下；
    int w[1005];
    int s, n;//背包承载重量和物品数量；
    while (cin >> s >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> w[i];//输入每件物品的重量；
        }
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;//前0个物品可以装下；
        for (int i = 1; i <= n; i++)
        {
            for (int j = s; j >= 0; j--)//s->背包容量；
            {
                if(dp[i-1][j] == 1) dp[i][j] = 1;
                if(j - w[i] >= 0 && dp[i-1][j- w[i]] == 1) dp[i][j] = 1;
            }
            
        }
        if(dp[n][s] == 1) cout << "YES" <<endl;
        else cout << "NO" <<endl;
        
    }
    
    return 0;
}