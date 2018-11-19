#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define sz(s) ((int)((s).size()))

typedef long long ll;

const ll mod = 1000000007;
const double pi = 3.1415926535897932384626;

ll powmod(ll a, ll b) {ll res = 1; ll rem = a % mod; for (; b; b >>= 1) {if (b & 1) res = (res * rem) % mod; rem = (rem * rem) % mod;} return res;}

const int N = 18;

int ara[N];

int main()
{	
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
#endif
    
	double h = 0.0;
	double m = 0;
	double s = 0;
	int t1 = 0;
	int t2 = 0;
	scanf("%lf %lf %lf %d %d", &h, &m, &s, &t1, &t2);

	h = h + ((m * 60.0) + s) / 3600.0;
	m = (m * 60 + s) / 300.0;
	s = s / 5.0;

	m = (m >= 0.0 && m < 1.0) ? m + 12.0 : m;
	s = (s >= 0.0 && s < 1.0) ? s + 12.0 : s;

	bool check = false;

	int a = min(t1, t2);
	int b = max(t1, t2);

	t1 = a;
	t2 = b;

	if ((h >= t1 && h <= t2) || (m >= t1 && m <= t2) || (s >= t1 && s <= t2)) {
		check = true;
	}
	else {
		puts("YES");
		return 0;
	}
	
	if (check) {
		if ((h >= t1 && h <= t2) && (m >= t1 && m <= t2) && (s >= t1 && s <= t2)) {
			puts("YES");
			return 0;
		}
	}

	puts("NO");

	return 0;
}
