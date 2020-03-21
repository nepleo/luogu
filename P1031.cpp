#include <cstdio>
using namespace std;

int main() {
    int sum = 0, n = 0, mid = 0;
    int cnt = 0;
    int arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    mid = sum / n;
    for (int i = 0; i < n; i++) {
        if (arr[i] - mid) {
            arr[i + 1] += (arr[i] - mid);
            cnt++;
        }
    }
    printf ("%d", cnt);
    return 0;
}