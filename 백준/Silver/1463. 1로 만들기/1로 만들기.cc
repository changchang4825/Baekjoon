#include <bits/stdc++.h>
#define MAX_VAL 1000000000
using namespace std;
int X;
int board[1000005];

int func(int x) {
    if (x == 1 || board[x] > 0) {
        return board[x];
    }
    
    int x1 = MAX_VAL, x2 = MAX_VAL, x3 = MAX_VAL;
    if (x % 3 == 0) {
        x1 = func(x / 3) + 1;
    }
    if (x % 2 == 0) {
        x2 = func(x / 2) + 1;
    }
    x3 = func(x - 1) + 1;
    board[x] = min({x1, x2, x3});

    return board[x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> X;
    cout << func(X);

    return 0;
}