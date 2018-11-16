#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <iomanip>

#pragma comment(linker, "/STACK:16000000")

#ifndef Local_file
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#endif

#define rn(n) int n; cin >> n
#define fv(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define db double
#define sqr(n) ((n) * (n))

using namespace std;

const int INF = 1'000'000'007;
const int MOD = 998'244'353;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef Local_file
	freopen("file.in.txt", "r", stdin);
	freopen("file.out.txt", "w", stdout);
#endif
	rn(n); rn(k);
	vector <string> v;
	v.reserve(n);
	fv(i, n) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	vector <vector <int>> col_pr(n, vector <int>(k)); // how many dominoshka in column
	vector <vector <int>> str_pr(n, vector <int>(k)); // how many dominoshka in string
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k - 1; j++) {
			str_pr[i][j] = (j > 0 ? str_pr[i][j - 1] : 0);
			if (v[i][j] == '#') continue;
			if (v[i][j + 1] == '#') continue;
			str_pr[i][j]++;
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n - 1; j++) {
			col_pr[j][i] = (j > 0 ? col_pr[j - 1][i] : 0);
			if (v[j][i] == '#') continue;
			if (v[j + 1][i] == '#') continue;
			col_pr[j][i]++;
		}
	}
	rn(q); 
	fv(i, q) {
		rn(x1); rn(y1); rn(x2); rn(y2);
		int ans = 0;
		for (int i = x1 - 1; i < x2; i++)
			ans += (y2 > 1 ? str_pr[i][y2 - 2] : 0) - (y1 > 1 ? str_pr[i][y1 - 2] : 0);
		for (int i = y1 - 1; i < y2; i++)
			ans += (x2 > 1 ? col_pr[x2 - 2][i] : 0) - (x1 > 1 ? col_pr[x1 - 2][i] : 0);
		cout << ans << endl;
	}
	return 0;
}