#include <iostream>
#include <vector>
using namespace std;

bool isSearch(const vector<int>& arr, int num) {
    if (arr.empty()) {
        return false;
    }
    for (int i : arr) {
        if (num == i) {
            return true;
        }
    }
    return false;
}

void Move(vector<int>& arr) {
    for (int i = 0; i < (arr.size() - 1); i++) {
        arr[i] = arr[i + 1];
    }
    arr.pop_back();
}

int main() {
    int M, N;
    cin >> M >> N;
    vector<int> cache;
    int str[N];
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    if (M == 0 || N == 0) {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        if (!isSearch(cache, str[i]) && cache.size() < M) {
            cache.push_back(str[i]);
            cnt++;
            continue;
        }
        if (!isSearch(cache, str[i]) && cache.size() == M) {
            Move(cache);
            cache.push_back(str[i]);
            cnt++;
            continue;
        }
        if (isSearch(cache, str[i])) {
            continue;
        }
    }
    cout << cnt;
    return 0;
}