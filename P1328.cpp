#include <iostream>
using namespace std;

//0 = 平, 1 = 赢 , -1 = 输
int rules[5][5] = {{0, -1, 1, 1, -1},
                   {1, 0, -1, 1, -1},
                   {-1, 1, 0, -1, 1},
                   {-1, -1, 1, 0, 1},
                   {1, 1, -1, -1, 0}};

int main() {
    int N, Na, Nb;
    cin >> N >> Na >> Nb;
    int a[Na], b[Nb];
    int aScore = 0, bScore = 0;
    for (int i = 0; i < Na; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < Nb; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < N; i++) {
        if (rules[a[i % Na]][b[i % Nb]] == 0) {
            continue;
        }
        else if (rules[a[i % Na]][b[i % Nb]] == 1) {
            aScore++;
        }
        else if (rules[a[i % Na]][b[i % Nb]] == -1) {
            bScore++;
        }
    }
    cout << aScore << " " << bScore;
    return 0;
}

