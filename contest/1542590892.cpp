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
char a[10];
inline void solve() {
	int n;
	scanf("%s",a);
	char t = a[0];
	char c = a[1];
	scanf("%d",&n);
	bool flag1 = 0,flag2 =0;
	rep(i, 1, n + 1) {
		scanf("%s",a);
		if(a[1]== t) flag1 = 1;
		if(a[0] == c) flag2 = 1;
		if(a[0] == t && a[1] == c) flag1 = flag2 = 1;
	}
	puts((flag1 && flag2) ? "YES" : "NO");
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