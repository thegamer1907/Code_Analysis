#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long ll;
const int MAXN = 100500;
const int ALL = 12 * 60 * 60;

bool check_in(int l, int r, int a)
{
	return l < a && a < r;
}

bool check(int a, int b, int c, int t1, int t2)
{
	if (t2 < t1) {
		t2 += ALL;
	}

	if (a < t1) {
		a += ALL;
	}
	if (b < t1) {
		b += ALL;
	}
	if (c < t1) {
		c += ALL;
	}

	return !check_in(t1, t2, a) && !check_in(t1, t2, b) && !check_in(t1, t2, c);
}

int main()
{                                                     
	ios_base::sync_with_stdio(0);

	int h, m, s;
	int a1, a2, a3, t1, t2;

	cin >> h >> m >> s >> t1 >> t2;


	a1 = (h % 12) * 60 * 60 + (m) * 60 + s;
	a2 = (m * 60 + s) * 12;
	a3 = (s) * 12 * 60;
	t1 = (t1 % 12) * 60 * 60;
	t2 = (t2 % 12) * 60 * 60;
	cout << (check(a1, a2, a3, t1, t2) || check(a1, a2, a3, t2, t1) ? "YES\n" : "NO\n");	
	
	return 0;
}
