#include <bits/stdc++.h>
using namespace std;
int board[1005];
int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    board[1] = 1;
    board[2] = 2;

    cin >> N;
    for (int i = 3; i <= N; i++) {
        board[i] = (board[i - 1] + board[i - 2]) % 10007;
    }

    cout << board[N];

    return 0;
}