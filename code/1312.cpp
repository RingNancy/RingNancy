#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;
struct node
{
    int u, v, w;
} edge[maxn * maxn];
// 使用克鲁斯卡尔Kruskal算法进行，按照最小的权值边进行排序；
bool cmp(node a, node b)
{
    return a.w < b.w;
}

// 并查集
int fa[maxn];
int find(int x)
{
    if (x == fa[x])
        return x;
    fa[x] = find(fa[x]);
    return fa[x];
}
int main()
{
    int n, m; // 道路条数和村庄数目；
    while (cin >> n >> m)
    {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> edge[i].u >> edge[i].v >> edge[i].w; // 输入每条边的起点，终点 以及权值大小；
        }
        for (int i = 1; i <= m; i++)
            fa[i] = i;             // 初试化每个村庄结点；
        sort(edge, edge + n, cmp); // 按照权值边从小到大排序；
        int sum = 0;               // 统计权值
        int total = 0;             // 统计已经连接的边数
        for (int i = 0; i < n; i++)
        {
            int nx = find(edge[i].u);
            int ny = find(edge[i].v);
            if (nx != ny)
            {
                fa[nx] = ny;
                sum += edge[i].w; // 权值相加
                total++;          // 连接的编书统计；
            }
        }
        if (total < m - 1) // 如果变数比村庄数目还少1，则图无法连通， 也不会又最小生成树；
        {
            cout << "?" << endl;
        }
        else
            cout << sum << endl;
    }
    return 0;
}