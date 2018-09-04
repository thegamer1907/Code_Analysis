#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) 	for(int i=a;i<b;++i)
#define RFOR(i,a,b) 	for(int i=a;i>=b;--i)
#define ln 		"\n"
#define mp make_pair
#define pb push_back
#define pii pair<ll,ll>
#define sz(a)	ll(a.size())
#define debug1(x) cout<<x<<endl
#define debug2(x,y) cout<<x<<"-->"<<y<<endl
#define debug3(x,y,z) cout<<x<<"-->"<<y<<"-->"<<z<<endl
#define F first
#define S second
#define all(c)	c.begin(),c.end()
#define trace(c,x) for(auto &x:c)
typedef long long ll;
typedef long double ld;
ll n,x[1000002],small[10000010],counter[10000010];
std::vector<int> v;
void pre()
{
	for(int i=2;i<10000010;++i)
	{
		if(small[i]==0)
		{
			for (int j = i; j < 10000010; j+=i)
			{
				small[j]=i;
			}
		}
	}
	return;
}
int main()
{
		ios_base::sync_with_stdio(false);
	 	cin.tie(NULL);
	 	cin>>n;
	 	FOR(i,0,n)cin>>x[i];
	 	v.pb(0);
	 	pre();
	 	ll t,cur,m;
	 	FOR(i,0,n)
	 	{
	 		t=x[i];
	 		while(t>1)
	 		{
	 			cur=small[t];
	 			counter[cur]++;
	 			while(t%cur==0)
	 			t/=cur;
	 		}
	 	}
	 	FOR(i,0,10000001)counter[i]+=counter[i-1];
	 	cin>>m;
	 	ll l,r;
	 	while(m--)
	 	{
	 		cin>>l>>r;
	 		if(r>1e7 && l<1e7)cout<<counter[10000000]-counter[l-1]<<ln;
	 		else if(r>1e7 && l>1e7)cout<<"0\n";
	 		else cout<<counter[r]-counter[l-1]<<ln;
	 	}
		return 0;
}