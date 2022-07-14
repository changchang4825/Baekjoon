#include <bits/stdc++.h>
using namespace std;
stack<int> S;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K, n, ans = 0;
    cin >> K;

    while (K--) {
        cin >> n;
        if (n) S.push(n);
        else S.pop();
    }

    while (!S.empty()) {
        ans += S.top();
        S.pop();
    }
    cout << ans;

    return 0;
}