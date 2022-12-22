#include <bits/stdc++.h>
using namespace std;
int N, S, cnt = 0;
int val[22];

void func (int k, int tmp) {
    if (k == N) {
        if (tmp == S) cnt++;
        return;
    }
    func(k + 1, tmp);
    func(k + 1, tmp + val[k]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (int i = 0; i < N; i++) cin >> val[i];
    func(0, 0);
    if (!S) cnt--;
    cout << cnt;
    return 0;
}