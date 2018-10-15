#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define endl '\n'
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pld pair <ld, ld>

using namespace std;

const int N = 2e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector <string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = n - 1; i >= 1; i--) {
        bool f = 0;
        for (int j = 0; j < min(a[i].size(), a[i - 1].size()); j++) {
            if (a[i][j] < a[i - 1][j]) {
                f = 1;
                a[i - 1] = a[i - 1].substr(0, j);
                break;
            }
            if (a[i][j] > a[i - 1][j]) {
                f = 1;
                break;
            }
        }
        if (!f && a[i - 1].size() > a[i].size()) {
            a[i - 1] = a[i - 1].substr(0, a[i].size());
        }
    }
    for (auto i : a)
        cout << i << endl;
    return 0;
}
