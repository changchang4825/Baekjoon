#include <bits/stdc++.h>
using namespace std;
int board[305][5];
int score[305];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> score[i];
    }
    board[1][1] = score[1];
    board[2][1] = score[2];
    board[2][2] = score[1] + score[2];

    for (int i = 3; i <= N; i++) {
        board[i][1] = max(board[i - 2][1], board[i - 2][2]) + score[i];
        board[i][2] = board[i - 1][1] + score[i];
    }

    cout << max(board[N][1], board[N][2]);

    return 0;
}