#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int ans(string s, int k) {
    int n = s.size();
    int l = 0, r = n + 1;
    while (r - l > 1) {
        int m = (l + r) / 2;
        int mini = INF;
        int now = 0;
        for (int i = 0; i < m; ++i) {
            if (s[i] == 'b') {
                ++now;
            }
        }
        mini = min(mini, now);
        for (int i = m; i < n; ++i) {
            if (s[i] == 'b') {
                ++now;
            }
            if (s[i - m] == 'b') {
                --now;
            }
            mini = min(now, mini);
        }
        if (mini <= k) {
            l = m;
        } else {
            r = m;
        }
    }
    return l;
}

int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ns;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'b') {
            ns += 'a';
        } else {
            ns += 'b';
        }
    }
    cout << max(ans(s, k), ans(ns, k));
}