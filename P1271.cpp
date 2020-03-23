#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int x, int y) {
    return x < y;
}

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + m, cmp);
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}