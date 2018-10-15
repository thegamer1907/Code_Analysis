#include <bits/stdc++.h>
using namespace std;

#ifndef _WIN32
    #define getchar getchar_unlocked
#endif

#define MP make_pair
#define PB push_back
#define ST first
#define ND second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)(x).size())

typedef long long int LLI;
typedef unsigned long long int LLU;
typedef long double LD;
typedef pair<int, int> pii;
typedef pair<long long int, long long int> pll;
typedef vector<int> vi;

#ifdef ONLINE_JUDGE
ostream cnull(NULL);
#define cerr cnull
#endif

template<class TH> void _dbg(const char *sdbg, TH h){cerr<<sdbg<<"="<<h<<"\n";}
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',') cerr<<*sdbg++;
  cerr<<"="<<h<<",";
  _dbg(sdbg+1, a...);
}
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#define dbgV(R) cerr << #R << "=["; for(int e : R) cerr << e << ", "; cerr << "E]\n";
#define dbgA(R, n) cerr << #R << "=["; for(int i = 0; i <= n; ++i) cerr << R[i] << ", "; cerr << "E]\n";
#define boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int MX = 200007;
int a[MX];
LLI s[MX];

int32_t main()
{
	int n, q; scanf("%d%d", &n, &q);
	for(int i = 1; i <= n; ++i){
		scanf("%d", &a[i]);
		s[i] = s[i - 1] + a[i];
	}
	int wsk = 1, pozyczone = 0;
	for(int i = 1; i <= q; ++i){
		LLI k; scanf("%lld", &k);
		//debug(i, wsk);
		int beg = wsk;
		int pocz = wsk, kon = n;
		while(pocz < kon){
			int sr = (pocz + kon + 1) / 2;
			if(s[sr] - s[wsk - 1] - pozyczone <= k) pocz = sr;
			else kon = sr - 1;
		}
		if(a[wsk] - pozyczone <= k){
			wsk = pocz + 1;
			if(wsk > n) {wsk = 1; pozyczone = 0;}
			else pozyczone = k - (s[wsk - 1] - s[beg - 1] - pozyczone);
		}
		else pozyczone += k;
		printf("%d\n", n - wsk + 1);
	}
}
