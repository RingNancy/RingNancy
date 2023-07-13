#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;//分别代表读者数量和书籍编号；
    while (cin >> n >> m)
    {
        map<int, int> mp;
        int book[n];
        for (int i = 0; i < n; i++)
        {
            cin >> book[i];
            mp[book[i]] ++;
        }
        for (int i = 0; i < n; i++)
        {
            if(mp[book[i]] > 1)
            {
                cout << mp[book[i]] - 1 << endl;
            }
            else{
                cout << "BeiJu" << endl;
            }
        }
        
        
    }
    
    system("pause");
    return 0;
}