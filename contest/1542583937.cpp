#include <stdio.h>
#include <bits/stdc++.h>			

#define pb push_back
#define pf push_front
#define pp pop_back
#define sz(a) (int)(a.size())
#define mp make_pair
#define F first
#define S second
#define next _next
#define prev _prev
#define left _left
#define right _right
#define y1 _y1
#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = (int)1e6 + 123;
const ll INF = (ll)1e18 + 123;
const int inf = (int)1e9 + 123;
const int MOD = (int)1e9 + 7;

void megaRandom() {
	unsigned int FOR;
 	asm("rdtsc" : "=A"(FOR));
  srand(FOR);
}

int n, k;
set<vector<int> > st;
vector<vector<int> > g; 
int cnt[6];

void yes() {
	printf("YES");
	exit(0);
}

void no() {
	printf("NO");
	exit(0);
}

int main() {
	megaRandom();
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i ++) {
		vector<int> tmp(k);
		for(int j = 0; j < k; j ++)
			scanf("%d", &tmp[j]);
		st.insert(tmp);		  	
	}
	for(auto x : st)
		g.pb(x);
	for(int mask = 1; mask < (1 << sz(g)); mask ++) {
		memset(cnt, 0, sizeof cnt);
		for(int i = 0; i < sz(g); i ++) {
			if(mask & (1 << i)) {
				for(int j = 0; j < sz(g[i]); j ++)
					if(g[i][j]) 
						cnt[j] ++;
			}
		}
		if(__builtin_popcount(mask) >= 2 * max({cnt[0], cnt[1], cnt[2], cnt[3]}))
			yes();
	}
	no();
	return 0;         
}
