#include <bits/stdc++.h>

#define si(x)		 scanf("%d", &x)
#define sf(x)		 scanf("%f", &x)
#define sc(x)		 scanf("%c", &x)
#define ss(x)		 scanf("%s", x)
#define sll(x)		 scanf("%I64d", &x)
#define sld(x)		 scanf("%lf", &x)
#define pri(x)		 printf("%d", x)
#define prf(x)		 printf("%f", x)
#define prc(x)		 printf("%c", x)
#define prs(x)		 printf("%s", x)
#define prll(x)		 printf("%I64d", x)
#define prld(x)		 printf("%lf", x)
#define itn 		 int
#define ll 			 long long
#define vi 			 vector<int>
#define vl			 vector<ll>
#define vvi 		 vector<vi>
#define vvl 		 vector<vl>
#define pii 		 pair<int, int>
#define pll 		 pair<ll, ll>
#define pil 		 pair<int, ll>
#define pli 		 pair<ll, int>
#define all(a) 		 (a).begin, (a).end()
#define FR 			 first
#define SC 			 second
#define mp 			 make_pair
#define pb 			 push_back
#define sz(x) 		 (x).size()
#define rep(i, a, n) for(int i = a; i < n; i ++)
#define per(i, a, n) for(int i = n - 1; i >= a; i --)
#define mod 		 1000000007

using namespace std;

const itn maxn = 1e5+1e4;

int a[maxn];

int main() {

	itn n;
	si(n);
	rep(i, 0, n) {
		si(a[i]);
		a[i] += (i == 0) ? 0 : a[i - 1];	
	}
	int m, x;
	si(m);
	rep(i, 0, m) {
		si(x);
		int l = 0, r = n - 1;
		while(l < r) {
			int m = (l + r) / 2;
			if(a[m] < x) 
				l = m + 1;
			else 
				r = m;
		}
		pri(l + 1); prs("\n");
	}

	return 0;
}











