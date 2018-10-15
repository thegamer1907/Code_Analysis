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
    int n;
    cin >> n;
    string ht[n];
    for (int i = 0; i < n; ++i) {
    	cin >> ht[i];
    }
    string ans[n];
    ans[n - 1] = ht[n - 1];
    for (int i = n - 2; i >= 0; --i) {
    	int sz = ht[i].size();
    	int psz = ans[i + 1].size();
    	bool f = false;
    	for (int j = 0; j < sz; ++j) {
    		if ((j == psz || ht[i][j] > ans[i + 1][j]) && !f) break;
    		if (!f && j < psz && ans[i + 1][j] > ht[i][j]) f = true;
    		ans[i] += ht[i][j];
    	}
    }
    for (int i = 0; i < n; ++i) cout << ans[i] << '\n';
}
