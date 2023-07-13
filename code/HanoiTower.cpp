#include <bits/stdc++.h>
using namespace std;
int step;
void HanoiTower(int n, char a, char b, char c)
{
    if (n == 1)
    {
        if ((step + 1) % 5 == 0)
        {
            cout << a << "-->" << c << endl;
        }
        else
        {
            cout << a << "-->" << c << " ";
        }
        step++;
        return;
    }
    HanoiTower(n - 1, a, c, b);
    HanoiTower(1, a, b, c);
    HanoiTower(n - 1, b, a, c);
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        step = 0;
        HanoiTower(n, 'A', 'B', 'C');
        cout << endl;
    }

    return 0;
}