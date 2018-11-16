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
#define pii pair <int, int>

using namespace std;

typedef long double ld;

const int INF = 1'000'000'007;
const int MOD = 998'244'353;
const int MAXN = 100'500;
const int MAXL = 10'050;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef Local_file
	freopen("file.in.txt", "r", stdin);
	freopen("file.out.txt", "w", stdout);
#endif
	string s;
	getline(cin, s);
	set <char> c;
	for (int i = 0; i < s.size(); i++) {
		if ('a' <= s[i] && s[i] <= 'z')
			c.insert(s[i]);
	}
	cout << c.size();
	return 0;
}
