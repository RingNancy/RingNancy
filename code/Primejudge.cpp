#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if(x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if( x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b;
    int count  = 0;
    while (cin >> a >> b)
    {
        if (a > b) swap(a, b);
        for (int i = a; i <=b; i++)
        {
            if(isPrime(i))
            {
                count ++;
            }
        }
        cout << count << endl;
        count = 0;
    }
    system("pause");
    return 0;
}