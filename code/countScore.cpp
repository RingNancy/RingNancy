#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n )
    {
        map<int, int> mp1;
        if(n==0) break;
        int score[1005];
        for (int i = 0; i < n; i++)
        {
            cin >> score[i];
            mp1[score[i]]++;
        }
        int score_one;
        cin >> score_one;
        cout << mp1[score_one] <<endl;
    }
    system("pause");
    return 0;
}