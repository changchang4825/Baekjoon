#include <bits/stdc++.h>
using namespace std;
int num[9];
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    while (N) {
        int n = N % 10;
        if (n == 9) n = 6;
        if (num[n]-- == 0) {
            for (int i = 0; i < 9; i++) num[i]++;
            num[6]++;
            ans++;
        }
        N /= 10;
    }
    cout << ans;

    return 0;
}