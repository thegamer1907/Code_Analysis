#include <bits/stdc++.h>
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++) 
#define forab(i,a,b) for(int i=a;i<=b;i++) 
#define tc(t) int t;cin >>t;while(t--)
#define ll long long 
#define pb(i) push_back(i)
#define fio ios_base::sync_with_stdio(false),cin.tie(NULL)
//int buckets[(int)1e5+1];
using namespace std;
const int N=(int)(1e6);
using namespace std;

int main() {
	ll n,m;
	cin >> n >> m ;
	set<ll>s;
	ll a[n];
	for0(i,n) cin >> a[i]; 
	ll ans[n]={0};
	for(int i=n-1;i>=0;i--)
	{
	   s.insert(a[i]);
	   ans[i]=s.size();
	  
	}
	while(m--)
	{
	    ll k;
	    cin >> k; 
	    k--;
	   cout << ans[k] << endl;
	}
	return 0;
}