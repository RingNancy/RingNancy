#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;
char mpt[maxn][maxn];
int vis[maxn][maxn];                              // 用来记录已经走过的位置，避免重复；
int direction[4][2] = {0, 1, 1, 0, 0, -1, -1, 0}; // 分别代表四个反向 ，上下左右；
struct node
{
    int x, y;
    int step;
};
// 广度优先搜索算法；
int bfs(int sx, int sy)
{
    memset(vis, 0, sizeof(vis)); // 完成搜索后记录清空；
    queue<node> q;
    q.push(node{sx, sy, 0});
    vis[sx][sy] = 1; // 起点记录，为1；
    int ans = -1;
    while (!q.empty())
    {
        node now = q.front();
        q.pop();
        if (mpt[now.x][now.y] == 'E') // 代表找到最短的
        {
            ans = now.step;
            break;
        }
        for (int i = 0; i < 4; i++) // 代表上下左右四个方向；
        {
            int nx = now.x + direction[i][0];
            int ny = now.y + direction[i][1];
            if ((mpt[nx][ny] == '*' || mpt[nx][ny] == 'E') && vis[nx][ny] == 0) // 确保路径可以走，并且路径没有重复；
            {
                q.push(node{nx, ny, now.step + 1});
                vis[nx][ny] = 1;
            }
        }
    }
    return ans;
}
int main()
{
    int h, w;
    while (cin >> h >> w)
    {
        if (h == 0 && w == 0)
            break;
        int sx = 0, sy = 0;
        memset(mpt, 0, sizeof(mpt));
        for (int i = 1; i < h; i++)
        {
            cin >> mpt[i] + 1;
            for (int j = 1; j < w; j++)
            {
                if (mpt[i][j] = 'S')
                {
                    sx = i;
                    sy = j;
                }
            }
        }
        int ans = bfs(sx, sy);
        cout << ans << endl;
    }

    return 0;
}