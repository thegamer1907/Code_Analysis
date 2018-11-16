#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(c) int((c).size())
#define mp make_pair
#define all(c) (c).begin(), (c).end()

using namespace std;
typedef long long ll;

set<int> cnt;
int res[100010], n, m;
int a[100010];

void init() {
    cin >> n >> m;
    for (int i = 1; i < n + 1; ++i) cin >> a[i];
}

void solve() {
    for (int i = n; i > 0; --i) {
        cnt.insert(a[i]);
        res[i] = sz(cnt);
    }
    while (m--) {
        int l;
        cin >> l;
        cout << res[l] << endl;
    }
}

int main() {
    init();
    solve();
    return 0;
}
