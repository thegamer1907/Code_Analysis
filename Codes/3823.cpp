#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define pss pair<string,string>
#define mp make_pair
bool srt(pii lhs, pii rhs)
{
	if(abs(lhs.first)==abs(rhs.first))
	return abs(lhs.second)<abs(rhs.second);
	return abs(lhs.first)<abs(rhs.second);
}
bool check(ll x,ll b, ll pb, ll nb, ll s, ll ps, ll ns, ll c, ll nc ,ll pc, ll rs)
{
	ll o=0;
	ll cost=max(o,(b*x-nb))*pb+max(o,(s*x-ns))*ps+max(o,(c*x-nc))*pc;
	if(cost<=rs)
	return true;
	return false;
}
int main()
{
	string st;
	cin>>st;
	ll nb,ns,nc;
	ll pb,ps,pc;
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	ll rs;
	cin>>rs;
	ll b=0,s=0,c=0;
	for(int i=0;i<st.length();i++)
	{
		if(st[i]=='B')
		b++;
		else if(st[i]=='C')
		c++;
		else if(st[i]=='S')
		s++;
	}
	ll l=0,r=10000000000000;
	ll ans=0;
	while(l<=r)
	{
		ll mid=(r-l)/2+l;
		if(check(mid,b,pb,nb,s,ps,ns,c,nc,pc,rs)==true)
		{
			ans=mid;
			l=mid+1;
		}
		else
		r=mid-1;
	}
	cout<<ans;
}
