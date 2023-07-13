#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 1;
        int day;
        cin >> day;
        if (day < 1)
            return 0;
        else
        {
            sum = sum + day * 2 * (day - 1);
        }
        cout << sum << endl;
    }
    return 0;
}