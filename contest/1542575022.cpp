#include <bits/stdc++.h>
using namespace std;
#define eps 1e-6
#define e exp(1.0)
#define pi acos(-1.0)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define SZ(x) ((int)(x).size())
#define All(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define Close() ios::sync_with_stdio(0),cin.tie(0)
#define INF 0x3f3f3f3f
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const int maxn = 1e5 + 10;
const int maxm = 1e3 + 5;
const int mod = 1e9 + 7;
/* head */
int st[105];
struct node {
	int len;
	string pre, suf;
	bitset<((1 << 19) + 10)> vis;
} s[210];
inline void solve() {
	st[1] = 0;
	rep(i, 2, 19) st[i] = st[i - 1] + (1 << (i - 1));
	int n, m;
	scanf("%d", &n);
	rep(i, 0, n) {
		string str;
		cin >> str;
		s[i].len = SZ(str);
		s[i].vis.reset();
		rep(j, 0, SZ(str)) {
			int mask = 0;
			for (int k = j;  k < j + 18 && k < SZ(str); k++) {
				mask = mask << 1 | (str[k] - '0');
				s[i].vis.set(st[k - j + 1] + mask);
			}	
		}
		if (s[i].len > 18) {
			s[i].pre = str.substr(0, 18);
			s[i].suf = str.substr(s[i].len - 18);
			s[i].len = 18;
		} else s[i].pre = s[i].suf = str;
	}
	scanf("%d", &m);
	rep(i, n, n + m) {
		int a, b;
		scanf("%d%d", &a, &b);
		a--; b--;
		string str = s[a].suf + s[b].pre;
		s[i].len = s[a].len + s[b].len;
		s[i].vis = s[a].vis | s[b].vis;
		rep(j, 0, SZ(str)) {
			int mask = 0;
			for (int k = j; k < j + 18 && k < SZ(str); k++) {
				mask = mask << 1 | (str[k] - '0');
				s[i].vis.set(st[k - j + 1] + mask);
			}
		}
		if (s[i].len > 18) {
			if (s[a].len < 18) s[i].pre = str.substr(0, 18);
			else s[i].pre = s[a].pre;
			if (s[b].len < 18) s[i].suf = str.substr(SZ(str) - 18);
			else s[i].suf = s[b].suf;
			s[i].len = 18;
		} else s[i].pre = s[i].suf = str;
		int res = 0;
		rep(j, 1, 19) {
			bool flag = 1;
			rep(k, st[j], st[j] + (1 << j)) flag &= s[i].vis[k];
			if (flag) res = j;
		}
		printf("%d\n", res);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	long _begin_time = clock();
#endif
	solve();
#ifndef ONLINE_JUDGE
	long _end_time = clock();
	printf("time = %ld ms.", _end_time - _begin_time);
#endif
	return 0;
}