#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define MP make_pair
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
using namespace std;
typedef long long LL;
typedef double D;
typedef long double LDB;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
#define rep(i, n) for(int i = 0; i < n; i ++)
#define rep1(i, a, b) for(int i = a; i < b; i ++)
#define per1(i, a, b) for(int i = a; i >= b; i --)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
int a[107];
int main(){
	int n, m; scanf("%d %d", &n, &m);
	int mxn = 0;
	rep1(i, 1, n+1) scanf("%d", a + i);
	rep1(i, 1, n+1) mxn = max(mxn, a[i]);
	mxn += m;
	int ll = 1, rr = 10100, ans = rr;
	while(ll <= rr){
		int mid = (ll + rr) >> 1;
		int sum = 0, ok = 1;
		rep1(i, 1, n+1){
			if(a[i] > mid) ok = 0;
			else sum += mid - a[i];
		}
		if(ok && sum >= m) rr = mid - 1, ans = mid;
		else ll = mid + 1;
	}
	printf("%d %d\n", ans, mxn);
	return 0;
}

