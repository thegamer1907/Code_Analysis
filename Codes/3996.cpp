#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define ld long double
#define F first
#define S second

//mt19937 gen(chrono::system_clock::now().time_since_epoch().count());

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, q;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < m; ++j) {
    		cin >> a[i][j];
    	}
    }
    vector <int> mx(n, -1);
    mx[n - 1] = n - 1;
    for (int j = 0; j < m; ++j){
    	int gr = n - 1;
    	for (int i = n - 2; i >= 0; --i) {
    		if (a[i][j] > a[i + 1][j]) gr = i;
    		mx[i] = max(mx[i], gr);
    	}
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
    	int l, r;
    	cin >> l >> r;
    	--l;
    	--r;
    	if (mx[l] >= r) cout << "Yes\n";
    	else cout << "No\n";
    }
}
