#include<bits/stdc++.h.>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll mini=999999999999999999;
	mini=min(a,mini);
	mini=min(c,mini);
	mini=min(d,mini);
	ll maxi=999999999999999999;
	a-=mini;
	maxi=min(maxi,a);
	maxi=min(maxi,b);
	ll ans=mini*256+maxi*32;
	cout<<ans;	
}
