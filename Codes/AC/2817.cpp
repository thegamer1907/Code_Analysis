#include <bits/stdc++.h>
//#include "util.h"
 
using namespace std;
 
#define sz(x) (int)(x).size()
#define F first
#define S second
#define mpa make_pair
#define pb emplace_back
 
typedef int int32;
typedef long long int64;
typedef pair<int, int> pii;
 
template<typename c> void smax(c &x, c y) { x = max(x, y); }
template<typename c> void smin(c &x, c y) { x = min(x, y); }

const int maxn = 1e6 + 11;
string s;
int n, z[maxn];

int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> s;
	n = sz(s);
	for (int i = 1, l = 0, r = 0; i < n; i++) {
		if (i <= r)
			z[i] = min(r-i+1, z[i-l]);
		while (i + z[i] < n && s[ i+z[i] ] == s[ z[i] ])
			z[i]++;
		if (i + z[i] - 1 > r)
			l = i, r = i+z[i]-1;
	}
	int pref = 0;
	for (int i = 1; i < n; i++)
		smax(pref, z[i] - (i+z[i]==n));
	int suff = 0;
	for (int i = 1; i < n; i++)
		if (i+z[i] == n && z[i] <= pref)
			smax(suff, z[i]);
	int ans = min(suff, pref);
	if (ans)
		cout << s.substr(0, ans) << endl;
	else
		cout << "Just a legend\n";
}
