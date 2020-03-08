#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct line {
    int m, n;       //m 表示要分离线的行或列， n表示这条线能分开的人的数量
} xaix[1000], yaix[1000];

bool cmpn(line a, line b) {
    return a.n > b.n;
}

bool cmpm(line a, line b) {
    return  a.m < b.m;
}

int main() {
    int m, n, k, l, d;
    scanf("%d %d %d %d %d", &m, &n, &k, &l, &d);
    int x, y, p, q;
    for (int i = 0; i < d; i++) {
        scanf ("%d %d %d %d", &x, &y, &p, &q);
        if (x == p) {
            yaix[min(y, q)].m = min(y, q);
            yaix[min(y, q)].n++;
        }
        if (y == q) {
            xaix[min(x, p)].m = min(x,p);
            xaix[min(x, p)].n++;
        }
    }
    sort(xaix, xaix + 1000, cmpn);
    sort(yaix, yaix + 1000, cmpn);
    sort(xaix, xaix + k, cmpm);
    sort(yaix, yaix + l, cmpm);
    for (int i = 0; i < k; i++) {
        printf("%d ", xaix[i].m);
    }
    printf("\n");
    for (int i = 0; i < l; i++) {
        printf("%d ", yaix[i].m);
    }
    return 0;
}

