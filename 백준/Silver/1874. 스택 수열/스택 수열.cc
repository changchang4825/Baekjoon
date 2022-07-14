#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, num, M = 0;
    string str;
    stack<int> s;

    cin >> n;
    while (n--) {
        cin >> num;
        if (num > M) {
            for (int i = M + 1; i <= num; i++) {
                s.push(i);
                str.append("+\n");
            }
            s.pop();
            str.append("-\n");
            M = num;
        }
        else {
            while (1) {
                if (s.empty()) {
                    cout << "NO";
                    return 0;
                }
                str.append("-\n");
                if (s.top() == num) {
                    s.pop();
                    break;
                }
                s.pop();
            }
        }
    }
    cout << str;

    return 0;
}