#include <bits/stdc++.h>
using namespace std;
// bool isPrime(int x)
// {
//     if(x < 2 )
//     {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(x); i++)
//     {
//         if(x % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
    
// }
// int main ()
// {
//     int n;
//     int prime[10005];
//     int ant=0;
//     int ans = 1;
//     while (cin >> n)
//     {
//         //首先找到0-n之间的质数，保存在数组当中；
//         for (int i = 2; i <=n; i++)
//         {
//             if(isPrime(i))
//             {
//                 prime[ant++] = i;//将区间内部的素数保存；
//             }
//         }
//         for (int i = 0; i < ant; i++)
//         {
//             if(n % prime[i] == 0)
//             {
//                 n /= prime[i];
//                 ans++;
//             }
//         }
//         if(n > 1) ans ++;
//         cout << ans <<endl;
//     }
//     system("pause");
//     return 0;
// }
// 线性素数筛选 prime[0]存的是素数的个数
const int maxn = 100000000 + 5;
int prime[maxn];
void getPrime()
{
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i <= maxn; i++)
    {
        if(!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0] && prime[j] * i <= maxn; j++)
        {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
        
    }
    
}
int mian()
{
    getPrime();
    int n;
    while (cin >> n)
    {
        int ans = 0;
        for (int i = 1; i <= prime[0]; i++)
        {
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                ans ++;
            }
            
        }
        if(n > 1 )ans ++;
        cout << ans <<endl;
    }
    
    return 0;
}