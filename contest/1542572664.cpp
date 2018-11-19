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

int main()
{	
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
#endif

	int n = 0;
	char ara[3];
	char inp[3];
	set<char> last;
	set<char> fast;

	scanf("%s\n%d\n", ara, &n);

	for (int i = 1; i <= n; ++i) {
		scanf("%s\n", inp);
		if ((inp[0] == ara[0] && inp[1] == ara[1]) || (inp[0] == ara[1] && inp[1] == ara[0])) {
			puts("YES");
			return 0;
		}
		last.insert(inp[1]);
		fast.insert(inp[0]);
	}

	if (last.count(ara[0]) && fast.count(ara[1])) puts("YES");
	else puts("NO");
	
	return 0;
}
	
