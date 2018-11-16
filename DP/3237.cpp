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

const int MX = 107, INF = 1e9;
int a[MX];
int dp[MX][MX];

int32_t main()
{
	int n, b; scanf("%d%d", &n, &b);
	for(int i = 1; i <= n; ++i) scanf("%d", &a[i]);
	for(int i = 0; i <= n; ++i) for(int j = 0; j <= n; ++j) dp[i][j] = INF;
	dp[0][0] = 0;
	for(int i = 1; i < n; ++i){
		int odd = 0;
		for(int j = i; j >= 1; --j){
			odd += (a[j] % 2);
			if(2*odd == i - j + 1){			
				for(int k = 1; k <= i; ++k){
					if(i == 2) debug(dp[j - 1][k - 1]);
					dp[i][k] = min(dp[i][k], dp[j - 1][k - 1] + abs(a[i + 1] - a[i]));
				}
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i) for(int j = 1; j <= i; ++j){ if(j== 2 && dp[i][j] <= b) debug(i, j); if(dp[i][j] <= b) ans = max(ans, j);}
	printf("%d", ans);
}
