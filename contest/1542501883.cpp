#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
#define per(i, a, b) for(int i=(b)-1; i>=(a); i--)
#define sz(a) (int)a.size()
#define de(a) cout << #a << " = " << a << endl
#define dd(a) cout << #a << " = " << a << " "
#define all(a) a.begin(), a.end()
#define pw(x) (1ll<<(x))
#define endl "\n"
typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
const int P = 1e9 + 7;
int add(int a, int b) {if((a += b) >= P) a -= P; return a;}
int sub(int a, int b) {if((a -= b) < 0) a += P; return a;}
int mul(int a, int b) {return 1ll * a * b % P;}
int kpow(int a, int b) {int r=1;for(;b;b>>=1,a=mul(a,a)) {if(b&1)r=mul(r,a);}return r;}
//----

const int N = 1e5 + 7;
int cnt[N], a[N], n, k;
ll f[N], g[N];

void solve(int L, int R, int l, int r, ll tmp) {
	if (l > r) return;
	int mid = (l + r) >> 1;
	int R1 = min(mid, R);
	g[mid] = pw(60);
	int pos; 
	rep(i, l, mid+1) tmp += cnt[a[i]]++; 
	rep(i, L, R1+1) {
		if (i > L) tmp -= --cnt[a[i]];
		if (f[i] + tmp <= g[mid]) {
			g[mid] = f[i] + tmp;
			pos = i;
		} 
	}
	per(i, L+1, R1+1) tmp += cnt[a[i]]++;
	rep(i, l, mid+1) tmp -= --cnt[a[i]]; 
	solve(L, pos, l, mid-1, tmp);
	rep(i, l, mid+1) tmp += cnt[a[i]]++; 
	rep(i, L+1, pos+1) tmp -= --cnt[a[i]];
	solve(pos, R, mid+1, r, tmp);
	rep(i, L+1, pos+1) cnt[a[i]]++;
	rep(i, l, mid+1) --cnt[a[i]]; 
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	//cout << setiosflags(ios::fixed);
	//cout << setprecision(2);
	cin >> n >> k;
	rep(i, 1, n+1) cin >> a[i], f[i] = f[i-1] + cnt[a[i]]++;
	memset(cnt, 0, sizeof(cnt));
	rep(i, 1, k) {
		solve(0, n, 1, n, 0);
		memcpy(f, g, sizeof(f));
	}
	cout << f[n];
	return 0;
}

