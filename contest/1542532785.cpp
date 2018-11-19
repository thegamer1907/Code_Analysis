/* One original thought is worth a thousand mindless quotings */

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<algorithm>
#include<bitset>
#include<queue>
#include <math.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(10);cout << fixed;
#define dbset(x) for(int i=0 ; i<x.size(); i++) cerr << x[i] << " "; cerr << endl;
#define inf 1000000007
#define INF 1000000000000000000LL
#define PI 3.14159265358979323846
#define mod 1000000007
#define mod1 1000696969
#define flusz fflush(stdout);
#define VI vector<int>
#define VPI vector < pair<int,int> >
#define PII pair<int, int>
#define BIT bitset<N>
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define endl '\n'
#define REP(x, y) for(int x = 0; x < (y); ++x)
#define FOR(x, y, z) for(int x = y; x <= (z); ++x)
#define FORR(x, y, z) for(int x = y; x >= (z); --x)
using namespace std;

template<class TH> void _dbg(const char *sdbg, TH h){cerr<<sdbg<<"="<<h<<"\n";}
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',')cerr<<*sdbg++;cerr<<"="<<h<<","; _dbg(sdbg+1, a...);
}
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)

#define int long long

const int N = 1000*100 + 7;
const int K = 27;
	
int test;

int n,k;

int t[N];

int dp[N][K];

int M[N];

int lft = 1, rght = 0;

int res;

void add(int x){
	res += M[t[x]];
	M[t[x]]++;
}

void rem(int x){
	M[t[x]]--;
	res -= M[t[x]];
}

void skor(int l, int r){
	while(lft >= l){
		add(--lft);
	}

	while(lft < l){
		rem(lft++);
	}

	while(rght < r){
		add(++rght);
	}

	while(rght > r){
		rem(rght--);
	}
}

void go(int l, int r, int L, int R, int x){
	if (l > r)
		return;

	int m = (l+r)/2;

	int a = 0, b = INF;

	FORR(i,min(R,m),L){
		skor(i,m);

		if (b > dp[i-1][x-1] + res){
			b = dp[i-1][x-1] + res;
			a = i;
		}
	}

	dp[m][x] = min(dp[m][x],b);

	if (l <= m-1){
		go(l,m-1,L,a,x);
	}

	if (m+1 <= r){
		go(m+1,r,a,R,x);
	}
}

void solve()
{
	cin >> n >> k;

	FOR(i,0,n){
		FOR(j,0,k){
			dp[i][j] = INF;
		}
	}

	dp[0][0] = 0;

	FOR(i,1,n){
		cin >> t[i];
	}

	FOR(i,1,k){
		go(1,n,1,n,i);
	}

	cout << dp[n][k];

    return;
}

int32_t main()
{
    boost

    test=1;

	for(int i=1; i <= test; i++){
        solve();
	}

    return 0;
}
