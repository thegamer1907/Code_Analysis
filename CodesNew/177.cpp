/*input
1 10
4
*/
#include<bits/stdc++.h>
#define ull 		unsigned long long
#define ll 			long long
#define M 			1000000007
#define pb 			push_back
#define p_q 		priority_queue
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define sz(x)       (int)x.size()
#define endl        '\n'
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios	    	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mp 			make_pair
#define lb 			lower_bound
#define ub			upper_bound
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define ini(a,n,b)	for(ll int i=0;i<n;i++) a[i]=0;
#define hell 		(ull)1e9
using namespace std;
int main(void)
{
	ios
	ll n,k;
	cin>>n>>k;
	ll a[n];
	rep(i,1,n+1)
	cin>>a[i];
	a[0]=0;
	rep(i,1,n+1)
	a[i]+=a[i-1];
	int m=0;
	rep(i,1,n+1)
	{
		if(a[i]<k)
		{
			m=max((ll)m,i);
			continue;
		}
		ll x=a[i]-k;
		int j=lb(a,a+i,x)-a;
		m=max((ll)m,(ll)(i-j));
	}
	cout<<m<<endl;
}