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

int cnt[N];

int main()
{	
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
#endif
    
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; ++i) {
		int s = 0;
		for (int j = 1; j <= k; ++j) {
			int a = 0;
			scanf("%d", &a);
			s = s * 2 + a;
		}
		++cnt[s];
	}

	for (int i = 0; i < (1 << k); ++i) {
		for (int j = 0; j < (1 << k); ++j) {
			if (cnt[i] && cnt[j] && ((i & j) == 0)) {
				puts("YES");
				return 0;
			}
		}
	}

	puts("NO");

	return 0;
}
