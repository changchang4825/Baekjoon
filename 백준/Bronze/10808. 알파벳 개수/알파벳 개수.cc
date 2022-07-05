#include <bits/stdc++.h>
using namespace std;
string S;
int alphabet[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> S;
    for (char i : S) alphabet[i - 'a']++;
    for (int i : alphabet) cout << i << " ";

    return 0;
}