#include <bits/stdc++.h>
using namespace std;
int ans[500001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, num;
    stack<int> S1, S2, S_idx;
    
    cin >> N;
    int idx = N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        S1.push(num);
    }
    for (int i = 0; i < N; i++) {
        while (!S2.empty() && S1.top() > S2.top()) {
            ans[S_idx.top()] = idx;
            S2.pop();
            S_idx.pop();
        }
        S2.push(S1.top());
        S_idx.push(idx--);
        S1.pop();
    }
    for (int i = 1; i <= N; i++) cout << ans[i] << " ";

    return 0;
}