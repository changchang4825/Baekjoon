#include <bits/stdc++.h>
using namespace std;
int n, x, ans;
bool arr[1000002];
int idx[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> idx[i];
        arr[idx[i]] = 1;
    }

    cin >> x;
    for (int i = 0; i < n; i++) {
        if (x - idx[i] <= 0 || x - idx[i] > 1000000 || x - idx[i] == idx[i] || !arr[idx[i]] || !arr[x - idx[i]]) continue;
        arr[idx[i]] = 0;
        ans++;
    }
    cout << ans;

    return 0;
}   