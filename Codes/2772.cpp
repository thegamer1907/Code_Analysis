#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define md (ll)(1e9+7)
#define pb push_back
#define pi pair<ll,ll>
#define ff first
#define ss second

ll l,sto[1000005];
string str;

pi check(ll a,ll b,ll k)
{

	ll j=a,m=0;
	for(ll i=b;i<b+k;i++)
	{
		while(str[i]!=str[j])
		{
			if(j==0)
				break;
			j=sto[j-1];
		}
		if(str[i]==str[j])
			j++;
		m=max(j,m);
	}
	return pi(m,j);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll i,j,x;

	cin >> str;
	l=str.size();

	if(l<3)
	{
		cout << "Just a legend" << endl;
		return 0;
	}
	
	j=0;
	for(i=1;i<l;i++)
	{
		while(str[i]!=str[j])
		{
			if(j==0)
				break;
			j=sto[j-1];
		}
		if(str[j]==str[i])
			j++;
		sto[i]=j;
	}

	x=check(0,1,l-2).ff;	
	if(x)
	{
		j=check(0,l-x,x).ss;
		for(i=0;i<j;i++)
			cout << str[i];
	}
	if(x==0 || j==0)
		cout << "Just a legend";
	cout << endl;
	return 0;
}


