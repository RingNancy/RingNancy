#include <bits/stdc++.h>
using namespace std;
int num[1000010];
int max_str[1000010];
long long maxn;  //表示最大连续字段和；
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        max_str[0] = num[0];//开始对序列进行遍历；
        maxn = num[0];
        for (int i = 0; i < n; i++)
        {
            max_str[i] = max(max_str[i-1] + num[i], num[i]);//如果当前元素值和之前的字段和进行一个比较；
            if(maxn < max_str[i])
            {
                maxn = max_str[i];//更新字段和
            }
        }
        cout << maxn << endl;
        
    }
    
    return 0;
}