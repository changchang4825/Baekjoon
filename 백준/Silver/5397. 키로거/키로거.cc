#include <bits/stdc++.h>
using namespace std;
list<char> l;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    string str;

    cin >> T;
    while (T--) {
        l.clear();
        auto cur = l.end();
        cin >> str;
        for (auto t : str) {
            if (t == '<') {
                if (cur != l.begin()) cur--;
            }
            else if (t == '>') {
                if (cur != l.end()) cur++;
            }
            else if (t == '-') {
                if (cur != l.begin()) cur = l.erase(--cur);
            }
            else l.insert(cur, t);
        }
        for (auto t : l) cout << t;
        cout << "\n";
    }

    return 0;
}