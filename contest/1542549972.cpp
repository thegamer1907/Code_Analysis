#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>
#include <set>
#include <vector>
#include <list>
#include <algorithm>
#include <regex>
#include <math.h>
#include <map>
#include <iterator>
#include <limits>
#include <numeric>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <queue>
#include <deque>
#include <stack>
#include <array>
#include <valarray>
#include <complex>


using namespace std;

typedef int integer;
typedef array<int, 2> hv;
#define double long double
#define make(type, x) type x; cin>>x
#define make2(type, x, y) type x, y; cin>>x>>y
#define make3(type, x, y, z) type x, y, z; cin>>x>>y>>z
#define make4(type, x, y, z, q) type x, y, z, q; cin>>x>>y>>z>>q
#define ALL(x) (x).begin(), (x).end()
#define FORIT(p) for(auto it = p.begin(); it != p.end(); it++)
#define FOR(b) for(int i = 0; i <(b); i++)
#define VI vector<int>
#define VVI vector<vector<int>>
#define PII pair<int, int>
#define PPII pair<PII, int>


void Solve() {
	make2(int, n, k);
	VI a(1 << k);
	FOR(n) {
		int t = 0;
		for (int j = 0; j < k; j++) {
			make(int, q);
			t <<= 1;
			t += q;
		}
		a[t]++;
	}
	switch (k)
	{
	case 1:
		cout << (a[0] ? "YES" : "NO");
		break;
	case 2:
		cout << ((a[0] || (a[1] && a[2])) ? "YES" : "NO");
		break;
	case 3:
		cout << ((a[0] || (a[1] && a[6]) || (a[2] && a[5]) || (a[3] && a[4]) || (a[1] && a[2]) ||
			(a[1] && a[4]) || (a[2] && a[4])) ? "YES" : "NO");
		break;
	case 4:
		cout << ((a[0] || 
			(a[1] && (a[2] || a[4] || a[8] || a[6] || a[10] || a[12] || a[14])) ||
			(a[2] && (a[1] || a[4] || a[8] || a[5] || a[9] || a[12] || a[13])) ||
			(a[4] && (a[1] || a[2] || a[8] || a[3] || a[9] || a[10] || a[11])) ||
			(a[8] && (a[1] || a[2] || a[4] || a[3] || a[5] || a[6] || a[7])) ||
			(a[3] && a[12]) || (a[5] && a[10]) || (a[9] && a[6]))? "YES" : "NO");
		break;
	}
}

integer main() {
	ios_base::sync_with_stdio(0);
	cin.tie();
#if  _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	Solve();
	while (!cin.eof()) {
		string s = "_";
		do getline(cin, s);
		while (!cin.eof() && !s.empty());
		if (cin.eof()) return 0;
		FOR(3) cout << endl;
		Solve();
	}
#else
	Solve();
#endif
	return 0;
}