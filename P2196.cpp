#include <iostream>
#include <cstring>
using namespace std;

int n;
bool g[25][25];
bool vis[25];
int w[25];
int dist[25];
int path[25];

int dfs(int u)
{
    if (dist[u])
        return dist[u];

    int ret = 0;
    for (int i = 1; i <= n; i ++)
    {
        int bv = g[u][i];
        if (bv && !vis[i])
        {
            vis[i] = true;

            int d = dfs(i) + w[i];
            if (ret < d)
            {
                ret = d;
                path[u] = i;
            }
            vis[i] = false;
        }
    }
    dist[u] = ret;

    return ret;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++)
        cin >> w[i];

    for (int i = 1; i <= n; i ++)
        for (int j = i + 1; j <= n; j ++)
            cin >> g[i][j];

    int ans = 0;
    for (int i = 1; i <= n; i ++)
    {
        vis[i] = true;
        int d = dfs(i) + w[i];
        if (ans < d)
        {
            ans = d;
            path[0] = i;
        }
        vis[i] = false;
    }

    int loc = 0;
    while (path[loc])
    {
        cout << path[loc] << " ";
        loc = path[loc];
    }
    cout << endl;
    cout << ans << endl;

    return 0;
}