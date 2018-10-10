#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	string str;
	cin>>str;
	ll rb=0,rs=0,rc=0;
	ll b,s,c;
	cin>>b>>s>>c;
	for(int i=0;i<str.length();i++)
		if(str[i]=='B')
		rb++;
	else if(str[i]=='S')
		rs++;
	else
		rc++;
	ll pb,ps,pc;
	cin>>pb>>ps>>pc;
	ll r;
	cin>>r;

	ll ans=0;
	ll k=0;
	while((b&&rb)||(c&&rc)||(s&&rs))
	{
		k=0;
		if(b<rb)
		{
			k+=(rb-b)*pb;
			b=0;
		}
		else
			b-=rb;
		if(s<rs)
		{
			k+=(rs-s)*ps;
			s=0;
		}
		else
			s-=rs;
		if(c<rc)
		{
			k+=(rc-c)*pc;
			c=0;
		}
		else
			c-=rc;
		if(k>r)
			break;
		else
		{
			r-=k;
			ans++;
		}
	}

	ans+=r/(rb*pb+rs*ps+rc*pc);
	cout<<ans<<"\n";
	return 0;
}