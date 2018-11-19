#include <bits/stdc++.h>

using namespace std;
#define mp make_pair
#define pb push_back
#define len(a) (int)a.size()
#define fi first
#define sc second
#define d1(x) cerr<<#x<<":"<<x<<endl;
#define d2(x,y) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define d3(x,y,z) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<" "<<#z<<":"<<z<<endl;
#define left ind+ind
#define right ind+ind+1
#define mid (l+r)/2

const long long LINF = 1e18+5;
const int MOD = (int) 1e9 + 7;
const int LOG = 18;
const int inf = 1e9;
const int N = 1e5+5;
const int M = 350;
const int SQ = 350;

typedef long long int lli;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;

int n , k , curl = 1,curr;
int ar[N] , cnt[N];
lli ans , dp[N][2];

void add(int ind) {
	ans += cnt[ar[ind]]++;
}
void erase(int ind) {
	ans -= --cnt[ar[ind]];
}
void relax(int l, int r) {

	while(l < curl)
		add(--curl);

	while(l > curl)
		erase(curl++);
	
	while(r > curr)
		add(++curr);
	
	while(r < curr)
		erase(curr--);

}
void solve(int l, int r,int optl,int optr) {
	if(l > r) return;
	
	dp[mid][1] = -1;
	
	int opt = optr;

	for(int i = min(optr,mid) ; i >= optl ; i--) {
		relax(i , mid) ;
		if(dp[mid][1] == -1 || dp[mid][1] > ans + dp[i - 1][0]) {
			dp[mid][1] = ans + dp[i - 1][0];
			opt = i;
		}
	}

	solve(l, mid - 1, optl, opt);
	solve(mid + 1, r, opt, optr);

}

int main() {

	scanf("%d %d",&n,&k);
	for (int i = 1 ; i <= n ; i++)
		scanf("%d",&ar[i]);

	for (int i = 1 ; i <= n ; i++)
		dp[i][0] = LINF;

	for (int i = 1 ; i <= k ; i++) {
		
		solve(1,n,1,n);

		for (int j = 1 ; j <= n ; j++)
			dp[j][0] = dp[j][1];
		d1(dp[n][1]);
	}
	printf("%lld\n",dp[n][1]);
	return 0 ;
}
