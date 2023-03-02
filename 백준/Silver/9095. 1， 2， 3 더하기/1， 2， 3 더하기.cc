#include <bits/stdc++.h>
using namespace std;
int board[15];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    board[1] = 1;
    board[2] = 2;
    board[3] = 4;
    for (int i = 4; i < 11; i++) {
        board[i] = board[i - 1] + board[i - 2] + board[i - 3];
    }

    cin >> T;
    while (T--) {
        cin >> n;
        cout << board[n] << "\n";
    }

    return 0;
}