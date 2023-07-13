#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
char mpt[maxn][maxn];
int vir[maxn][maxn];
int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

int dfs(int x, int y)
{
    vir[x][y] = 1; // 标记位置；
    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (mpt[nx][ny] == '@' && vir[nx][ny] == 0)
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    int h, w;
    while (cin >> h >> w)
    {
        if (h == 0 && w == 0)
            break;
        memset(mpt, 0, sizeof(mpt));
        memset(vir, 0, sizeof(vir));
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                cin >> mpt[i][j];
            }
        }
        int ans = 0;
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (mpt[i][j] == '@' && vir[i][j] == 0)
                {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}