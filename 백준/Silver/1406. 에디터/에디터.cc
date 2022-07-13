#include <bits/stdc++.h>
using namespace std;
char dat[600005];
int pre[600005], nxt[600005];
int unused = 1;

void insert (int addr, char data) {
    dat[unused] = data;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase (int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    dat[0] = ' ', pre[0] = -1, nxt[0] = -1;
    string str, cmd;
    int M;
    bool is_front = false;
    bool is_back = false;

    cin >> str >> M;
    cin.ignore();
    for (int i = 0; i < str.length(); i++) insert(unused - 1, str[i]);
    int idx = unused - 1;

    for (int i = 0; i < M; i++) {
        getline(cin, cmd);
        if (idx == 0) {
            is_front = true;
            is_back = false;
        }
        else if (nxt[idx] == -1) {
            is_front = false;
            is_back = true;
        }
        else {
            is_front = false;
            is_back = false;
        }

        if (cmd[0] == 'L' && is_front == false) idx = pre[idx];
        else if (cmd[0] == 'D' && is_back == false) idx = nxt[idx];
        else if (cmd[0] == 'B' && is_front == false) {
            erase(idx);
            idx = pre[idx];
        }
        else if (cmd[0] == 'P') {
            for (int j = 2; j < cmd.length(); j++) {
                insert(idx, cmd[j]);
                idx = nxt[idx];
            }
        }
    }
    for (idx = nxt[0]; nxt[idx] != -1; idx = nxt[idx]) cout << dat[idx];
    cout << dat[idx];

    return 0;
}