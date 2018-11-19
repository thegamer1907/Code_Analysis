#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <bitset>
#include <limits>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <functional>
#include <map>
#include <queue>
#include <utility>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

const int MAX = 16;

struct StrTran {
	int k;
	string beg, end;
	set<string> sss[MAX];
};

int main ()
{
	ios_base::sync_with_stdio (false);

#ifndef ONLINE_JUDGE
	freopen ("input0.in", "r", stdin);
	freopen ("output.out", "w", stdout);
#endif

	int n;
	cin >> n;

	vector<StrTran> os (n);
	for (int a = 0; a < n; a++) {
		string s;
		cin >> s;

		StrTran &ni = os[a];
		ni.beg = s.substr (0, min ((int)s.length (), MAX));
		ni.end = s.substr (s.length () - min ((int)s.length (), MAX), min ((int)s.length (), MAX));
		for (int b = MAX - 1; b >= 0; b--) {
			if (b > s.length ())
				continue;
			for (int c = 0; c + b <= s.length (); c++)
				ni.sss[b].insert (s.substr (c, b));
			if (ni.sss[b].size () == (1LL << b)) {
				ni.k = b;
				ni.sss[b].clear ();
				break;
			}
		}
	}

	int m;
	cin >> m;

	for (int a = 0; a < m; a++) {
		int x, y;
		cin >> x >> y;

		os.push_back (StrTran ());
		StrTran &ne = os.back ();
		ne.beg = os[--x].beg;
		ne.end = os[--y].end;

		if (ne.beg.length () < MAX)
			ne.beg = (ne.beg + os[y].beg).substr (0, min (MAX, (int)(ne.beg.length () + os[y].beg.length ())));
		if (ne.end.length () < MAX) {
			int olen = ne.end.length () + os[x].end.length ();
			ne.end = (os[x].end + ne.end).substr (olen - min (MAX, olen), min (MAX, olen));
		}

		ne.k = max (os[x].k, os[y].k);

		for (int b = ne.k + 1; b < MAX && b <= os[x].end.length () + os[y].beg.length (); b++)
			for (int c = max ((int)(b - os[x].end.length ()), 1); c < b && c <= os[y].beg.length (); c++)
				ne.sss[b].insert (os[x].end.substr (os[x].end.length () - (b - c), b - c) + os[y].beg.substr (0, c));
		for (int b = MAX - 1; b > ne.k; b--) {
			for (auto c = os[x].sss[b].begin (); c != os[x].sss[b].end (); c++)
				ne.sss[b].insert (*c);
			for (auto c = os[y].sss[b].begin (); c != os[y].sss[b].end (); c++)
				ne.sss[b].insert (*c);
			if (ne.sss[b].size () == (1LL << b)) {
				ne.k = b;
				ne.sss[b].clear ();
			}
		}

		cout << ne.k << "\n";
	}

	return 0;
}