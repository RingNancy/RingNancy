#include <bits/stdc++.h>
using namespace std;
const int maxn = 1005;
int dp[maxn];
int num[maxn];
int n;

int LIS_nn()
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = num[i];
        for (int j = 1; j < i; j++)
        {
            if(num [j] < num [i])
            {
                dp[i] = max(dp[i], dp[j] + num[i]);
            }
        }
        ans = max(dp[i], ans);
        
    }
    return ans;
}

int main()
{
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> num [i];
        }
        cout << LIS_nn() << endl;
    }
    
    return 0;
}