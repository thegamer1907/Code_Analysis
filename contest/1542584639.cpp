#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
const int inf = 0x3fffffff;
const int mod = 1e9 + 7;
const double eps = 1e-8;
const double pi = acos(-1);
const int maxn = 1e5 + 7;

int pos(int h, int m = 0, int s = 0) {
	return (h * 60 * 60 + m * 60 + s) % 43200;
}

int posm(int h, int m, int s) {
	return (720 * m + 12 * s) % 43200;
}

int poss(int h, int m, int s) {
	return (720 * s) % 43200;
}

bool all_between(int x, int y, int a, int b, int c) {
	if (a < x || a > y) {
		return false;
	}
	if (b < x || b > y) {
		return false;
	}
	if (c < x || c > y) {
		return false;
	}
	return true;
}

bool all_out(int x, int y, int a, int b, int c) {
	if (a > x && a < y) {
		return false;
	}
	if (b > x && b < y) {
		return false;
	}
	if (c > x && c < y) {
		return false;
	}
	return true;
}

int main() {
	//ios::sync_with_stdio(false);
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	int a = pos(h, m, s);
	int b = posm(0, m, s);
	int c = poss(0, 0, s);
	int x = pos(t1, 0, 0);
	int y = pos(t2, 0, 0);
	int ok = 0;
	if (x < y) {
		if (all_between(x, y, a, b, c) || all_out(x, y, a, b, c)) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
	else {
		if (all_between(y, x, a, b, c) || all_out(y, x, a, b, c)) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
	return 0;
}