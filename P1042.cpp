#include <iostream>
using namespace std;

int main() {
    char arr[62500];
    char input;
    int num = 0;
    for (int i = 0; i < 62500; i++) {
        cin >> input;
        if (input == 'E') {
            num = i;
            break;
        }
        arr[i] = input;
    }
    if (num == 0) {
        cout << 0 << ":" << 0 << endl;
        cout << endl;
        cout << 0 << ":" << 0 << endl;
    }
    int playerA = 0, playerB = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i] == 'W') {
            playerA++;
        } else if (arr[i] == 'L') {
            playerB++;
        }
        if ((playerA == 11 && playerA > playerB && playerA - playerB >= 2) || (playerB == 11 && playerB > playerA && playerB - playerA >= 2)) {
            cout << playerA << ":" << playerB << endl;
            playerA = 0;
            playerB = 0;
        } else if ((playerA >= 11 && playerA > playerB && playerA - playerB >= 2) || (playerB >= 11 && playerB > playerA && playerB - playerA >= 2)) {
            cout << playerA << ":" << playerB << endl;
            playerA = 0;
            playerB = 0;
        }
        if (i == (num - 1)) {
            cout << playerA << ":" << playerB << endl;
        }
    }
    cout << endl;
    playerA = 0;
    playerB = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i] == 'W') {
            playerA++;
        } else if (arr[i] == 'L') {
            playerB++;
        }
        if ((playerA == 21 && playerA > playerB && playerA - playerB >= 2) || (playerB == 21 && playerB > playerA && playerB - playerA >= 2)) {
            cout << playerA << ":" << playerB << endl;
            playerA = 0;
            playerB = 0;
        } else if ((playerA >= 21 && playerA > playerB && playerA - playerB >= 2) || (playerB >= 21 && playerB > playerA && playerB - playerA >= 2)) {
            cout << playerA << ":" << playerB << endl;
            playerA = 0;
            playerB = 0;
        }
        if (i == (num - 1)) {
            cout << playerA << ":" << playerB << endl;
        }
    }

    return 0;
}

