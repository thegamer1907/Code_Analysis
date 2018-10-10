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
typedef long long ll;
typedef long double ld;
map<ll,ll> counter;
ll ans=0;
ll r,co[3],per[3],p[3],aux[3];
bool check(ll val)
{
	ll cost=0;
	FOR(i,0,3)
	{
		aux[i]=per[i]*val;
		aux[i]-=co[i];
		if(aux[i]>0)cost+=aux[i]*p[i];
	}
	if(cost>r)return 0;
	return 1;
}
void ser()
{
	ll l=0,r=1e15,mid;
	while(l<r-1)
	{
		mid=(l+r)/2;
		if(check(mid))
			l=mid;
		else r=mid;
	}
	if(!check(r))r=l;
	cout<<r<<ln;
	return;
}
int main()
{
		ios_base::sync_with_stdio(false);
	 	cin.tie(NULL);
	 	string s;
	 	cin>>s;
	 	cin>>co[0]>>co[2]>>co[1];
	 	cin>>p[0]>>p[2]>>p[1];
	 	cin>>r;
	 	int len=s.length();
	 	FOR(i,0,len)
	 	{
	 		if(s[i]=='B')per[0]++;
	 		else if(s[i]=='C')per[1]++;
	 		else if(s[i]=='S')per[2]++;

	 	}
	 	ser();
		return 0;
}