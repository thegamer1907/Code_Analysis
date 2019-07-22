#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,k,val;
	cin>>n>>m>>k;
	set<ll> s;
	for(ll i=0;i<m;i++)
	{
		cin>>val;
		s.insert(val);
	}
	ll ko=k,ans=0;
	while(!s.empty())
	{
		if(ko>=(*s.begin()))
		{
			ll zo=0;
			while(ko>=(*s.begin()) && (s.size()>=1))
			{
				s.erase(s.begin());
				zo++;
			}
			ans++;
			ko+=zo;
		}
		else
		{
			ko+=k;
		}
	}
	cout<<ans;
}