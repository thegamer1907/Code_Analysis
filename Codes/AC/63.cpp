#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define CaseT int T;cin >> T;for(int cas=1;cas<=T;cas++)
#define clr(a,b) memset(a,b,sizeof(a))
#define sgn(a) ((a)==0?0:(a)/abs(a))
#define upd(a,b) (a%b?a/b+1:a/b)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define fst first
#define sec second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const double EPS = 1e-8;
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
const int M = 2e5+20;
const int N = 5e5+20;

int n;
ll sum,a[N];
ll dp[N];

int main() {
	FAST_IO;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum%3!=0){
		cout << 0 << endl;
		return 0;
	}
	ll t = sum / 3, x = 0, ans = 0;
	for(int i=1;i<=n;i++){
		x += a[i];
		if(x==t) {
			dp[i] = 1;
		}
		dp[i] += dp[i-1];
	}
	x = 0;
	for(int i=1;i<n;i++){
		x += a[i];
		if(x==2*t){
			ans += dp[i-1];
		}
	}
	cout << ans << endl;
	return 0;
}
