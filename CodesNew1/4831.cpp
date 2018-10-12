#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define MOD 1000000007
#define pb push_back
#define sq(x) ((x)*(x))
#define x first
#define y second
#define eps 1e-8
#define bpt(x) (__builtin_popcount(x))
#define bptl(x) (__builtin_popcountll(x))
#define bit(x, y) (((x)>>(y))&1)
#define bclz(x) (__builtin_clz(x))
#define bclzl(x) (__builtin_clzll(x))
#define bctz(x) (__builtin_ctz(x))
#define bctzl(x) (__builtin_ctzll(x))
#define debug(x) cout << #x << " = " << x << endl
#define PQ priority_queue<pii, vector<pii>, greater<pii> >

using namespace std;
typedef long long INT;
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;
typedef double DO;

template<typename T, typename U> inline void smin(T &a, U b) {if (a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, U b) {if (a<b) a=b;}

#define NN 501010

int n;
int a[NN];

int can(int mid) {
	if (n-mid>mid) return 0;
	for (int i=n-mid-1, j=n-1; i>=0; i--, j--) {
		if (a[i]*2>a[j]) return 0;
	}
	return 1;
}

int main() {
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d", a+i);
	sort(a, a+n);
	int st=0, ed=n;

	while (ed-st>1) {
		int mid=st+ed>>1;
		if (can(mid)) ed=mid;
		else st=mid;
	}

	cout << ed << endl;

	return 0;
}

 