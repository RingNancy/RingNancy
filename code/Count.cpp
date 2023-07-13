#include <bits/stdc++.h>
using namespace std;
int num;
void count(int m, int n)
{
    num += 1;
    if(2 * m < n) count (2*m , n);
    if(2 * m + 1 < n) count (2* m+1, n);
}
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        num = 0;
        count(m, n);
        cout << num <<endl;
    }
    
    system("pause");
    return 0;
}