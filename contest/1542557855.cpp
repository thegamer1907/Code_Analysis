#include <bits/stdc++.h>
using namespace std;
 
const int N = 209;
const int L = 10009;

int n, m, a, b, res[N];
string str[N];

string toString(int x, int k) {
    string ret = "";
    for (int i = 0; i < k; i++) ret += (x & (1 << i)) ? '1' : '0';
    return ret;
}

int solve(string pat) {
    for (int k = 9; k >= 0; k--) {
        bool flag = 1;
        for (int x = 0; x < (1 << k); x++) {
            if (pat.find(toString(x, k)) == pat.npos) {
                flag = 0;
                break;
            }
        }
        if (flag) return k;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> str[i];
        res[i] = solve(str[i]);
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        str[n + i] = str[a] + str[b];
        int len = str[n + i].size();
        if (len > 1000) str[n + i] = str[n + i].substr(0, 500) + str[n + i].substr(len - 500, 500);
        res[n + i] = max(solve(str[n + i]), max(res[a], res[b]));
        cout << res[n + i] << "\n";
    }
}