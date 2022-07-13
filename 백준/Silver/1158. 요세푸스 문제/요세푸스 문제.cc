#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    list<int> L;

    cin >> n >> k;
    cout << '<';
    for (int i = 1; i <= n; i++) L.push_back(i);
    auto t = L.begin();
    while (n--) {
        if (L.size() != 1) {
            for (int i = 0; i < k - 1; i++) {
                if (t == --L.end()) t = L.begin();
                else t++;
            }
            cout << *t << ", ";
            t = L.erase(t);
            if (t == L.end()) t = L.begin();
        }
        else cout << *L.begin() << '>';
    }

    return 0;
}