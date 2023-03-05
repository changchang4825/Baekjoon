#include <bits/stdc++.h>
using namespace std;
int board[1005][3];
int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> board[i][j];
            board[i][j] += min(board[i - 1][(j + 1) % 3], board[i - 1][(j + 2) % 3]);
        }
    }

    cout << min({ board[N][0], board[N][1], board[N][2]});

    return 0;
}