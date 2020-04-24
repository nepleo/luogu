#include <iostream>
#include <algorithm>
using namespace std;
int map[1005][1005] = {{0}};
int dp[1005][1005] = {{0}};
int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> map[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + map[i][j];
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans;
    return 0;
}
