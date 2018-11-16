/*input
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10

*/
#include<bits/stdc++.h>
#define ull 		unsigned long long
#define ll 			long long
#define M 			1000000007
#define pb 			emplace_back
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
using namespace std;
int main(void)
{
	ios
	int n,m;
	cin>>n>>m;
	int a[n],freq[(ll)1e5+1],d=0;
	rep(i,0,(ll)1e5+1)
	freq[i]=0;
	rep(i,0,n)
	{
		cin>>a[i];
		if(freq[a[i]]==0)
			d++;
		freq[a[i]]++;
	}
	vii l;
	rep(i,0,m)
	{
		ll x;cin>>x;
		l.pb(x,i);
	}
	sort(all(l));
	int k=0;
	int ans[m];
	for(pii p:l)
	{
		int x=p.first,i=p.second;
		while(k<x-1)
		{
			if(freq[a[k]]==1)
				d--;
			freq[a[k]]--;
			k++;
		}
		ans[i]=d;
	}
	for(int i:ans)
	cout<<i<<endl;

}