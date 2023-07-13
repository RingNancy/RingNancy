#include <bits/stdc++.h>
using namespace std;
int dp[30];
int num[30];
int n;
int LIS_dd()//下降子序列长度；
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if(num[j] >= num[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max (dp[i], ans);
    }
    return ans;
}
int main()
{
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> num[i];
        }

    }
    cout << LIS_dd() << endl;
    return 0;
}