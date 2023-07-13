#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, n;
    while (cin >> l >> n)
    {
        int beg, end;
        int num[10000] = {0};
        memset(num, 0, sizeof(int));
        int cnt = l + 1;//树的总数；
        for (int i = 0; i < n; i++)
        {
            cin >> beg >> end;
            for (int j = beg; j <= end; j++)
            {
                if(num[j] == 0)
                {
                    cnt--;
                    num[j] = 1;
                }
            }
            
        }
        cout << cnt << endl;

    }
    
    system("pause");
    return 0;
}