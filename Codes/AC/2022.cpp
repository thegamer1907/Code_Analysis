#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define ret(x) cout<<x<<endl; return 0;
ll MOD=1e9+7;

map<ll,vector<int> > m;

ll f(int id,ll a,ll b){
	ll x;
	ll y;
	vector<int>::iterator it;
	it = lower_bound(m[a].begin(),m[a].end(),id);
	x = it-m[a].begin();
	if(x<0) x=0;
	it = upper_bound(m[b].begin(),m[b].end(),id);
	y = it-m[b].begin();
	y = m[b].size()-y;
	return x*y;
}

int main(){
	ios_base::sync_with_stdio(0);
	ll n,k;
	cin>>n>>k;
	ll a[n];
	map<ll,int > p;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		m[a[i]].push_back(i);
		p[a[i]]=-1;
	}
	for (int i = 0; i < n; ++i)
	{
		if(p[a[i]]==-1){
			p[a[i]]=1;
			sort(m[a[i]].begin(),m[a[i]].end());
		}
	}
	ll ans=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%k==0) {
			ans+=f(i,a[i]/k,a[i]*k);
		}
	}
	ret(ans);
	return 0;	
}