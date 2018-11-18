#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/priority_queue.hpp>
using namespace std;
// using namespace __gnu_pbds;
inline int lowbit(int x) { return (x & (-x)); }
typedef long long ll;
inline char nc(){ static char buf[100000],*p1=buf,*p2=buf; return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++; } inline void rea(int &x){ char c=nc(); x=0; for(;c>'9'||c<'0';c=nc());for(;c>='0'&&c<='9';x=x*10+c-'0',c=nc()); }
#define N 100005
#define D 25
int n, m[N];
int bit[N], bit_size;
inline void bit_clear() { bit_size = 0; for (int i = 1 ; i <= n ; ++i) bit[i] = 0; }
inline void bit_insert(int x) { ++bit_size; for (int i = x ; i <= n ; i += lowbit(i)) ++bit[i]; }
inline void bit_remove(int x) { --bit_size; for (int i = x ; i <= n ; i += lowbit(i)) --bit[i]; }
inline int bit_query(int x) { int ret = 0; for (int i = x ; i > 0 ; i -= lowbit(i)) ret += bit[i]; return ret; }
// const int inf = 1000000000;
int bit_l, bit_r;
ll bit_cost;
inline ll cost(int l, int r) {
	if (l > r) return 0;
	while (bit_r < r) { ++bit_r; bit_cost += bit_query(m[bit_r]-1); bit_insert(m[bit_r]); }
	while (l < bit_l) {	--bit_l; bit_cost += bit_size - bit_query(m[bit_l]); bit_insert(m[bit_l]); }
	while (r < bit_r) {	bit_remove(m[bit_r]); bit_cost -= bit_query(m[bit_r]-1); --bit_r; }
	while (bit_l < l) { bit_remove(m[bit_l]); bit_cost -= bit_size - bit_query(m[bit_l]); ++bit_l; }
	return bit_cost;
}
inline ll cost2(int l, int r) {
	if (l > r) return 0;
	while (bit_r < r) { bit_cost += bit[m[++bit_r]]++; }
	while (l < bit_l) {	bit_cost += bit[m[--bit_l]]++; }
	while (r < bit_r) {	bit_cost -= --bit[m[bit_r--]]; }
	while (bit_l < l) { bit_cost -= --bit[m[bit_l++]]; }
	return bit_cost;
}
const ll inf = 10000000000ll;
// int c[N][N];  // c[i][j] = sum { s[k][j] | i <= k < j } = c[i+1][j] + s[i][j]
ll dp[D][N]; // dp[i][j] = min { dp[i-1][k] + c[k+1][j] | i-1 <= k < j }
inline void solve(int l, int r, int L, int R, int K) {
	if (L > R) return;
	int M = (L + R) >> 1;
	int pivot = (l + r) >> 1;
	for (int i = l ; i <= r && i <= M ; ++i) {
		if (dp[K][M] > dp[K-1][i] + cost2(i + 1, M) ) {
			dp[K][M] = dp[K-1][i] + cost2(i + 1, M);
			pivot = i;
		}
	}
	solve(l, pivot, L, M - 1, K);
	solve(pivot, r, M + 1, R, K);
}
int u;
// int s[N][N];  // s[i][j] = cnt { k | i < k <= j && m[k] > m[i] } = s[i][j-1] + (m[i] < m[j])
// int p[N][N];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// int t;
	// cin >> t;
	// while (t--) {
		cin >> n >> u;
		// rea(n);
		// rea(u);
		for (int i = 1 ; i <= n ; ++i)
			cin >> m[i];
		for (int i = 0 ; i <= u ; ++i)
			for (int j = 0 ; j <= n ; ++j) {
				// s[i][j] = 0;
				// c[i][j] = 0;
				dp[i][j] = inf;
			}
		// for (int i = 1 ; i <= n ; ++i)
		// 	for (int j = i + 1 ; j <= n ; ++j) {
		// 		s[i][j] = s[i][j-1];
		// 		if (m[i] == m[j]) ++s[i][j];
		// 	}
		// for (int j = n ; j > 0 ; --j)
		// 	for (int i = j - 1 ; i > 0 ; --i)
		// 		c[i][j] = c[i+1][j] + s[i][j];
		// for (int i = 1 ; i <= n ; ++i)
		// 	for (int j = 1 ; j <= n ; ++j) {
		// 		rea(s[i][j]);
		// 		s[i][j] += s[i-1][j] + s[i][j-1] - s[i-1][j-1];
		// 	}
		// for (int i = 1 ; i <= n ; ++i)
		// 	for (int j = i+1 ; j <= n ; ++j)
		// 		c[i][j] = s[j][j] - s[i-1][j] - s[j][i-1] + s[i-1][i-1];
		for (int i = 1 ; i <= n ; ++i) {
			// dp[1][i] = c[1][i];
			// bit_cost += bit_query(m[i]-1);
			bit_cost += bit[m[i]]++;
			dp[1][i] = bit_cost;
			// bit_insert(m[i]);
			// p[1][i] = 0;
		}
		bit_l = 1, bit_r = n;
		for (int i = 2 ; i <= u ; ++i) {
			solve(1, n, 1, n, i);
			// p[i][n+1] = n;
			// for (int j = n ; j >= i ; --j) {
			// 	for (int k = p[i-1][j] ; k <= p[i][j+1] ; ++k) {
			// 		if (dp[i-1][k] + c[k+1][j] < dp[i][j]) {
			// 			p[i][j] = k;
			// 			dp[i][j] = dp[i-1][k] + c[k+1][j];
			// 		}
			// 	}
			// }
		}
		// if (dp[u][n] >= inf)
		// 	cout << "inf\n";
		// else 
			cout << dp[u][n] << '\n';
	// }
}