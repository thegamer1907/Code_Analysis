#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
using vi = vector<i64>;
using vvi = vector<vi>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;


    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            if (i < n - 1 && s[i + 1] != t[i + 1] && s[i] != s[i + 1]) {
                s[i + 1] = t[i + 1];
                cnt++;
            } else {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}