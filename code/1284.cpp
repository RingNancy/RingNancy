#include<bits/stdc++.h>
using namespace std;
void getPrime(vector<int> & factor, int n )  //统计素因数个数；
{
    for (int i = 2; i*i <= n; i++)
    {
        while (n % i == 0)
        {
            factor[i] ++;
            n /= i;
            if(n <= 1) return;
        }

        
    }
    if(n > 1) factor[n] ++;
    
}
int main()
{
    int n, a;
    while (cin >> n >> a)
    {
        vector<int> factor_a(1000), factor_b(1000);
        getPrime(factor_a, a);
        for (int i = 2; i <= n; i++)
        {
            getPrime(factor_b, i);
        }
        int k = 1000;
        for (int i = 2; i <=a; i++)
        {
            if(factor_a[i])
            {
                k = min(k, factor_b[i]/factor_a[i]);
            }
        }
        cout << k <<endl;
        
        
    }
    
    return 0;
}