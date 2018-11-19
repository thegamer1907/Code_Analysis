#include<bits/stdc++.h>
#define chmax(a, b) (a = (a > b ? a : b))
#define chmin(a, b) (a = (a < b ? a : b))
#define LL long long
#define add(i, j)
#define dec(i, j)
//#define int long long 
using namespace std;
const int MAXN = 1e5 + 10;
inline int read() {
    int x = 0, f = 1; char c = getchar();
    while(c < '0' || c > '9') {if(c == '-') f = -1; c = getchar();}
    while(c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
    return x * f;
}
int N, K, a[MAXN], b[MAXN];
LL f[MAXN], g[MAXN];
void solve(int l, int r, int L, int R, LL w) {
	if(l > r) return ;
//	printf("%d %d %d %d %d\n", l, r, L, R, w);
	int mid = l + r >> 1, p = min(mid, R), k = 0;
	for(int i = l; i <= mid; i++) w += b[a[i]]++;
	for(int i = L; i <= p; i++)   w -= --b[a[i]], f[mid] > g[i] + w ? f[mid] = g[i] + w, k = i : 0;

	for(int i = l; i <= mid; i++) w -= --b[a[i]];
	for(int i = L; i <= p; i++)   w += b[a[i]]++;
	solve(l, mid - 1, L, k, w);

	for(int i = L; i < k; i++)    w -= --b[a[i]];
	for(int i = l; i <= mid; i++) w += b[a[i]]++;
	solve(mid + 1, r, k, R, w);

	for(int i = l; i <= mid; i++) --b[a[i]];
	for(int i = L; i < k; i++)    ++b[a[i]];
}
main() {
	N = read(); K = read();
	for(int i = 1; i <= N; i++) a[i] = read(), g[i] = g[i - 1] + b[a[i]]++; memset(b, 0, sizeof(b));
	while(K--) {memset(f, 0x7f, sizeof(f)); solve(1, N, 1, N, 0); swap(f, g);}
	cout << f[N];
}
/*

*/
