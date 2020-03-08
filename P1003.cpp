/*
//代码一
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int str[n][4];
    int needX = 0, needY = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            scanf ("%d", &str[i][j]);
        }
    }
    cin >> needX >> needY;
    int cnt = 0;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if ( needX >= str[i][0] && needX <= str[i][0] + str[i][2]
                && needY >= str[i][1] && needY <= str[i][1] + str[i][3]) {
            cnt++;
            flag = i + 1;
        }
        if (cnt == 0 && i == n - 1) {
            cout << -1;
            return 0;
        }
    }
    cout << flag;
    return 0;
}
*/

//代码二 改进
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int str[n][4];
    int needX = 0, needY = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &str[i][j]);
        }
    }
    cin >> needX >> needY;
    int cnt = 0;
    int flag = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (needX >= str[i][0] && needX <= str[i][0] + str[i][2]
            && needY >= str[i][1] && needY <= str[i][1] + str[i][3]) {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}