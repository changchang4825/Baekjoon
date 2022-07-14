#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, num;
    string str;
    stack<int> s;

    cin >> N;
    while (N--) {
        cin >> str;
        if (str == "push") {
            cin >> num;
            s.push(num);
        }
        else if (str == "pop") {
            if (s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (str == "size") cout << s.size() << "\n";
        else if (str == "empty") cout << s.empty() << "\n";
        else if (str == "top") {
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }

    return 0;
}