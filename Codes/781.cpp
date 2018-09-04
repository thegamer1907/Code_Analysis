// Template by [thunder_blade]
// IIIT ALLAHABAD
// includes :)

#include <bits/stdc++.h>
using namespace std;
#define TEST  int test_case; cin>>test_case; while(test_case--)
#define all(v) (v).begin(),(v).end()
#define fi  first
#define se  second
#define pb push_back
#define mp make_pair
#define ll long long int
#define SPEED ios_base::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define pf(x) printf("%f\n",x)
#define ps(x) printf("%s\n",x)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define ss(x) scanf("%s",x)
#define pis(x) cout<<x<<" "//printf("%d ",x)
#define pls(x) printf("%lld ",x)
#define pfs(x) printf("%f ",x)
#define pss(x) printf("%s ",x)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define mod 1000000007
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
ll power(ll a, ll n) {
	ll p = 1;
	while (n > 0) {
		if(n&1) {
			p = ((p%mod) * (a%mod))%mod; 
		} 
		n >>= 1; 
		a = ((a%mod)*(a%mod))%mod;
	} 
	return p%mod;
}
ll inf  = 5000005;
const long long B = 100000007; 
const long long C = 10010107; 
const int N = 200005;
const int LN = 25;


ll solve(ll n, ll k)
{
	if(n==1)
		return 1;

	ll num = 1LL<<n;
	num /= 2;
	if(k == num)
		return n;
	else if(k < num)
		return solve(n-1, k);
	else
		return solve(n-1, k-num);
}

int main()
{
	ll n, k;
	cin>>n>>k;
	cout<<solve(n,k)<<endl;
}