#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum1, sum2;
    double sum3, sum;
    sum1 = 0;
    sum2 = 0;
    sum3 = 0;
    sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum1 += i;
    }
    for (int i = 1; i <= b; i++)
    {
        sum2 += pow(i,2);
    }
    for (double i = 1; i <= c; i++)
    {
        sum3 += 1/i;
    }
    sum = sum1 + sum2  + sum3;
    cout << fixed << setprecision(2) << sum <<endl; 
    system("pause");
    return 0;
}