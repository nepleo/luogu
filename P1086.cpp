#include <iostream>
#include <algorithm>
using namespace std;

struct peanut {
    int x = 0, y = 0;
    int nums = 0;
};

bool cmp(peanut x, peanut y) {
    return x.nums > y.nums;
}

int main() {
    int row = 0, col = 0;
    int times = 0;
    int cnt = 0;
    int count = 0;
    int result = 0;
    cin >> row >> col >> times;
    peanut pea[row * col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> pea[cnt].nums;
            pea[cnt].x = i;
            pea[cnt].y = j;
            cnt++;
        }
    }
    sort(pea, pea + cnt, cmp);
    times = times - 2;
    if (times <= 2 * pea[0].x) {
        cout << 0;
        return 0;
    }
    count = count + pea[0].x + 1;
    result = pea[0].nums;
    int i = 0;
    while (times > (count + abs(pea[i + 1].x - pea[i].x) + abs(pea[i + 1].y - pea[i].y) + pea[i + 1].x )) {
         result += pea[i + 1].nums;
         count += (abs(pea[i + 1].x - pea[i].x) + abs(pea[i + 1].y - pea[i].y) + 1);
         i++;
    }
    cout << result;
    return 0;

}