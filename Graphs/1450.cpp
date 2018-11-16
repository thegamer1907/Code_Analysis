/**  NewYearTransporation.cpp
 *	 Created on: Sep 2, 2018
 *    Author: Sagar
 */

#include <bits/stdc++.h>
using namespace std;

typedef		pair<int, int>		ii;
typedef		vector<int>		vi;
typedef		vector<ii>		vii;

#define		TRvii(c, it)		for(vii:: iterator it = (c).begin(); it != (c).end; ++it)
#define		REP(i, a, b) 		for(int i = int(a); i <= int(b); ++i)
#define		endl           		"\n"

int n, t;

int main() {
	int n;
	ios::sync_with_stdio(false);
	cin.tie(0);
//	freopen("a.in", "r", stdin);
//	freopen("output.txt", "w", stdout);
	cin >> n >> t;
	vector<int> a(n);
	int start = 1;
	REP(i, 0, n-2)
	{
		cin >> a[i];
	}
	while (start < n) {
		start += a[start - 1];
		if (start == t) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

}
