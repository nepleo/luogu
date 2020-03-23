#include <iostream>

using namespace std;

void quickSort(int *arr, int left, int right) {
    int i = left, j = right;
    int mid = arr[(i + j) / 2];
    while (i <= j) {
        while (arr[i] < mid) i++;
        while (arr[j] > mid) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (i < right) quickSort(arr, i, right);
    if (left < j) quickSort(arr, left, j);
}

int main() {
    long n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}