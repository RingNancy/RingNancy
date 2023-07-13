#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;
int fa[maxn];
struct node
{
    int u, v, w, s;

}edge[maxn * maxn];
int find(int x)
{
    if(x = fa[x]) return x;
    fa[x] = find(fa[x]);//路劲压缩；
    return find(fa[x]);
}
bool cmp(node a, node b)
{
    if(a.s == b.s)
    {
        return a.w < b.w;
    }
    else return a.s > b.s;//优先选择已经修建过的路径
}
int main()
{
    int  n; //村庄数目；
    while (cin >> n)
    {
        if(n == 0) break;
        for (int i = 1; i <=n; i++) fa[i] = i;
        for (int i = 0; i < n*(n-1)/2; i++)
        {
            cin >> edge[i].u >> edge[i].v >> edge[i].w >> edge[i].s;
        }
        sort(edge, edge + n*(n-1)/2, cmp);
        int sum = 0; //统计花费；
        for (int i = 0; i < n*(n-1)/2; i++)
        {
            int nx = find(edge[i].u);
            int ny = find(edge[i].v);
            if(edge[i].s == 1)
            {
                fa[nx] = ny;
            }
            else if(nx != ny){
                fa[nx] = ny;
                sum += edge[i].w;
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}
