#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    int a[26] = { 0 };
    cin >> S;
    
    for (int i = 0; i < S.length(); i++) a[S[i] - 'a']++;
    for (int i = 0; i < 26; i++) cout << a[i] << " ";

    return 0;
}