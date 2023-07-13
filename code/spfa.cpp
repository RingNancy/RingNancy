#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
const int maxn = 105;
int n, m;
struct edge{
    int u, v, w;
    edge(int u,int v, int w): u(u), v(v), w(w) {}//构造函数赋值
};

vector<edge> edges; //存储边
vector<int>  G[maxn];  //邻接表存储

int dist[maxn];//存放起点到i的最短距离；
int vis[maxn];//记录走过的路径
int p[maxn];//存放路径数组

void spfa(int s)
{
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;//初始化；
    }
    dist[s] = 0;
    memset(vis, 0, sizeof(vis));
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        vis[u] = 0;
        for (int i = 0; i < G[u].size(); i++)
        {
            edge& e = edges[G[u][i]];
            if(dist[e.v] > dist[u] + e.w)
            {
                dist[e.v] = dist[u] + e.w;
                p[e.v] = u;
                if(!vis[e.v])
                {
                    vis[e.v] = 1;
                    q.push(e.v);
                }
            }
        }
        
    }
    

}

void addedge(int u, int v, int w)
{
    edges.push_back(edge(u,v,w));
    int sz = edges.size();
    G[u].push_back(sz-1);
}

void init()
{
    for (int i = 0; i <= n; i++)
    {
        G[i].clear();
    }
    edges.clear();
    
}
int main()
{
    while (cin >> n >>m)
    {
        if(n + m == 0) break;
        init();
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            addedge(a, b, c);
            addedge(b, a, c);

        }
        spfa(1);
        cout << dist[n] << endl;
    }
    
    return 0;
}