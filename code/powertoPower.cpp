#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//直接使用同余定理；和二分幂
ll pow_mod(ll x, ll n, ll mod)
{
    int ans = 1;
    while (n > 0)
    {
        if(n % 2 == 1)
        {
            ans = ans * x % mod;
        }
        x = x * x % mod;
        n /= 2;
    }
    return ans;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow_mod(x, n, 233333);
    system("pause");
    return 0;
}