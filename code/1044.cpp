#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fac(int x)
{
    if(x == 0) return 1;
    else{
        return x * fac(x-1);
    }
}
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fac(i);
    }
    cout << sum << endl;
    return 0;
}