#include <iostream>
#include <string>
using namespace std;

struct Toy {
    int d;
    string name;
};

int main() {
    int n, m;
    cin >> n >> m;
    Toy toy[n];
    for (int i = 0; i < n; i++) {
        cin >> toy[i].d >> toy[i].name;
    }
    int a, s;
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        cin >> a >> s;
        if ((a == 0 && toy[cnt].d == 0) || (a == 1 && toy[cnt].d == 1)) {
            cnt = (cnt - s + n) % n;
        }
        else if ((a == 0 && toy[cnt].d == 1) || (a == 1 && toy[cnt].d == 0)) {
            cnt = (cnt + s) % n;
        }
    }
    cout << toy[cnt].name;
    return 0;
}
