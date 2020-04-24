#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int graph[100][100];
int dist[100][100];
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

int dfs(int x, int y) {
    if (dist[x][y]) {
        return dist[x][y];
    }
    int ret = 0;
    for (int i = 0; i < 4; i++) {
        int tx = x + dx[i], ty = y + dy[i];
        if (tx >= 0 && ty >= 0 && tx < n && ty < m && graph[x][y] > graph[tx][ty]) {
            ret = max(ret, dfs(tx, ty) + 1);
        }
    }
    dist[x][y] = ret;
    return ret;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans = max(ans, dfs(i, j) + 1);
        }
    }
    cout << ans << endl;
    return 0;
}