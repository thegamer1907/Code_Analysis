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
double A[4];
inline void solve() {
	int h, m, s, a, b;
	scanf("%d%d%d%d%d", &h, &m, &s, &a, &b);
	a = 5 * a; b = 5 * b;
	A[1] = 5.0 * h + 1.0 * m / 60 + 1.0 * s / 360;
	if (A[1] >= 60) A[1] -= 60;
	A[2] = m + 1.0 * s / 60;
	A[3] = s;
	sort(A + 1, A + 4);
	int cnt1 = 0, cnt2 = 0;
	rep(i, 1, 3) if (A[i] < a && a < A[i + 1]) {
		cnt1 = i; 
		break;
	}
	if (!cnt1) cnt1 = 3;
	rep(i, 1, 3) if (A[i] < b && b < A[i + 1]) {
		cnt2 = i;
		break;
	}
	if (!cnt2) cnt2 = 3;
	puts((cnt1 == cnt2) ? "YES" : "NO");
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