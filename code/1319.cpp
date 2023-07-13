#include <bits/stdc++.h>
using namespace std;

const int maxn = 1005;
int fa[maxn];//记录连接点的位置；
//并查集模板；
int find(int x)
{
    if(x == fa[x]) return x;
    fa[x] = find(fa[x]);  //路径压缩；
    return fa[x];
}
int main()
{
    int n, m;
    while (cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        cin >> m;
        for (int i = 1; i <= n; i++)
        {
            fa[i] = i;  //首先初始化，每个城市的设置为单独未联通
        }
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            int fx = find(x);//找到相连的点
            int fy = find(y);
            if(fx != fy)
            {
                fa[fx] = fy;
                sum ++;// 两点之间，如果没有相连， 直接相连， 边数+1;
            }
        }
        cout << n - sum -1 << endl;   //无向图联通的话最少需要n-1条边，已经连接了  sum 条边；
    }
    
    system("pause");
    return 0;
}