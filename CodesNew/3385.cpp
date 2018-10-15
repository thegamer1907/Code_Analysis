/*input
3
7
1
6
5
 
*/
#include<bits/stdc++.h>
#define ull 		unsigned long long
#define ll 			long long
#define M 			1000000007
#define pb 			push_back
#define p_q 		priority_queue
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define all(a)      (a).begin(),(a).end()
#define sz(x)       (ll)x.size()
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
#define MAXN		(ll)20000000
using namespace std;
	
int main(void)
{
	ios
	ll n,m;
	cin>>n>>m;
	vector < ll > v(n);
	rep(i,0,n){
		cin>>v[i];
	}
	//ll maxi=(*a.rbegin());
	sort(v.begin(),v.end());
	ll maxi = v[n-1]+m;
	while(m){
		ll diff=v[n-1]-v[0];
		if (diff==0){
			v[n-1]=v[n-1]+(m/n)+((m%n)+n-1)/n;
			break;
		}
		if (diff<=m){
			v[0]=v[0]+diff;
			m=m-diff;
		}
		else{
			v[0]=v[0]+m;
			m=0;
		}
		/*rep(i,0,n){
			cout<<v[i]<<"\t";
		}
		cout<<"\n";*/
		sort(v.begin(),v.end());
	}
//	sort(v.begin(),v.end())
	cout<<v[n-1]<<"\t"<<maxi;

}