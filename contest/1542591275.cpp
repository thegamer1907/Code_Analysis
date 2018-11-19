#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define pp pop_back
#define MAXN   100001
#define mp make_pair
#define endl '\n'
#define ff first
#define ss second
ll min(ll x,ll y)
{
	if(x<y)
	return x;
	return y;
}
ll max(ll x,ll y)
{
	if(x>y)
	return x;
	return y;
}
int main()
{ 
	ll n,i;
	char x,y;
	cin>>x>>y;
	cin>>n;
	char a,b;
	string s[n];
	map<char,ll> m;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i][0]==x && s[i][1]==y)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	ll flag=0;
	for(i=0;i<n;i++)
	{
		if(s[i][1]==x)
		{
			flag=1;
			break;
		}
	}
	//cout<<flag<<endl;
	if(flag)
	{
		flag=0;
		for(i=0;i<n;i++)
		{
			if(s[i][0]==y)
			{
				flag=1;
				break;
			}
		}
	}
	//cout<<flag<<endl;
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
