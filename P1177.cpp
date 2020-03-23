#include <iostream>
#include <algorithm>

using namespace std;

int Partition(long *arr, int left, int right) {
    int temp = arr[left];
    while (left < right) {
        while (left < right && arr[right] > temp)
            right--;
        arr[left] = arr[right];
        while (left < right && arr[left] <= temp)
            left++;
        arr[right] = arr[left];
    }
    arr[left] = temp;
    return left;
}

void quickSort(long *arr, int left, int right) {
    if (left < right) {
        int pos = Partition(arr, left, right);
        quickSort(arr, left, pos - 1);
        quickSort(arr, pos + 1, right);
    }
}

int main() {
    long n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}