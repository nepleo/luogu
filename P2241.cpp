#include <iostream>
using namespace std;


int main() {
    long n = 0, m = 0;
    long long Square = 0;
    long long Rect = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (i == j)
                Square += (n - i) * (m - j);
            else
                Rect += (n - i) * (m - j);
        }

    cout << Square << " " << Rect << endl;
    return 0;
}
