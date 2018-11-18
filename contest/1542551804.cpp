#include <bits/stdc++.h> // PLEASE
 
using namespace std;
typedef long long ll;
typedef pair <int, int> pp;
#define MAXN 100005
#define MAXM 1005
#define MAXP 25
#define F first
#define S second
#define MP make_pair
#define PB push_back
const ll INF = 1e12;

int N, K;
int A[MAXN];
int C[MAXN];
int L = 1;
int R = 1;
ll ans = 0;
ll dp[MAXP][MAXN]; // dp[i][j] = min ( dp[i-1][k] + cst(k+1, j))

inline ll c2(ll x) { return (x*(x-1))/2LL; }
inline void add(int x) { C[x]++; ans += c2(C[x]) - c2(C[x]-1); }
inline void sub(int x) { C[x]--; ans += c2(C[x]) - c2(C[x]+1); }
inline void move(int l, int r)
{
	while(L > l) { L--; add(A[L]); }
	while(L < l) { L++; sub(A[L-1]); }
	while(R > r) { R--; sub(A[R+1]); }
	while(R < r) { R++; add(A[R]); }
}
void solve(int a, int b, int l, int r, int k)
{
	if(a > b) return;
	int md = (a+b)/2;
	ll mn = INF;
	int best = 0;
	for(int i=l; i<=min(r, md-1); i++) {
		move(i+1, md);
		ll cst = ans + dp[k-1][i];
		if(mn > cst) {
			mn = cst;
			best = i;
		}
	}
	dp[k][md] = mn;
	if(a != b) {
		solve(a, md-1, l, best, k);
		solve(md+1, b, best, r, k);
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> K;
	for(int i=0; i<=K; i++) for(int j=0; j<=N; j++) dp[i][j] = INF;
	for(int i=1; i<=N; i++) cin >> A[i];
	add(A[1]);	

	for(int i=1; i<=N; i++) { move(1, i); dp[1][i] = ans; }
	for(int i=2; i<=K; i++) solve(i, N, i-1, N-1, i);
	cout << dp[K][N] << endl;
}