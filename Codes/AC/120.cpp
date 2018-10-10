#include <bits/stdc++.h>

#define int long long
#define all(x) (x).begin(), (x).end()

using namespace std;

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(12); cout << fixed;
    int n; cin >> n;
    vector<int> a(n);
    for (int &x: a) cin >> x;
    vector<int> pref(n + 1);
    partial_sum(all(a), pref.begin()+1);
    int q; cin >> q;
    for (int i = 0; i < q; ++i) {
        int x; cin >> x;
        cout << lower_bound(all(pref), x) - pref.begin() << endl;
    }
	return 0;
}