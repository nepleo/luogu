#include <iostream>
#include <algorithm>
using namespace std;

int n, len = 1, f[5003][5003];

//高精度
void hp(int k) {
    int i;
    for (int i = 1; i <= len; i++)
        f[k][i] = f[k - 1][i] + f[k - 2][i];
    for (i = 1; i <= len; i++) {
        if (f[k][i] > 10) {
            f[k][i + 1] += f[k][i] / 10;
            f[k][i] = f[k][i] % 10;
            if (f[k][len + 1])
                len++;
        }
    }
}
int main() {
    int i = 0;
    cin >> n;
    f[1][1] = 1;
    f[2][1] = 2;
    for (i = 3; i <= n; i++) {
        hp(i);
    }
    for (i = len; i >= 1; i--)
        printf("%d", f[n][i]);
    return 0;

}