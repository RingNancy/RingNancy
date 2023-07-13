#include <bits/stdc++.h>
using namespace std;
int fac(int x)
{
    if(x == 0) return 1;
    else return x * fac(x - 1);
}
int main()
{
    int n;
    while (cin >> n)
    {
        cout << fac(n) << endl;
    }
    return 0;
}