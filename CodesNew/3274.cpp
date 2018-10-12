#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define Bit(i) (1 << (i))
#define sqr(x) ((x) * (x))
#define eps 1e-8

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

template<class T, class U> inline void chkmax(T& x, U y) { if (x < y) x = y; }
template<class T, class U> inline void chkmin(T& x, U y) { if (y < x) x = y; }

const int N = 1e5+10;
LL a[N];
int main() {

//	freopen("in.txt", "r", stdin);
	int n; scanf("%d", &n);
	LL ans = 0;
	for (int i = 0; i < n; i++) scanf("%lld", a + i), ans += 1LL * a[i];
	ans = LL(ceil(1.0 * ans / (n - 1)));
	LL anp = *max_element(a, a + n);
	chkmax(ans, anp);
	printf("%lld\n", ans);

	return 0;
}

                                                                             