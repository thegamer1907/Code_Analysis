#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sz(a) (ll)(a).size()

typedef long long ll;
typedef pair<ll,ll> pii;

const ll lt=100005;
ll mod=1000000007;
string s;
vector<ll> jump(1000005,-1);

void preprocessing()
{
	ll i,j;
	ll n=sz(s);
	jump[0]=0;
	for(i=1;i<n;i++)
	{
		j=jump[i-1];
		while(s[j]!=s[i] && j!=0)
			j=jump[j-1];
		if(s[j]==s[i])
			j++;
		jump[i]=j;
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>s;
	preprocessing();
	ll i,n=sz(s);
	ll j=0;
	ll maxi=-1;
	for(i=1;i<n;i++)
	{
		if(s[i]==s[j])
			j++;
		else if(s[i]!=s[j] && j!=0)
		{
			i--;
			maxi=max(maxi,j-1);
			j=jump[j-1];
		}
	}
	maxi=max(maxi,j-2);
	if(maxi==-1 || jump[n-1]==0)
	{
		cout<<"Just a legend\n";
		return 0;
	}
	ll mm=jump[n-1];
	ll x=jump[n-2];
	while(mm>maxi+1 && x!=0)
	{
		if(s[x]==s[n-1])
			mm=x+1;
		x=jump[x-1];
	}
	if(x==0 && s[x]==s[n-1])
		mm=1;
	if(mm>maxi+1)
	{
		cout<<"Just a legend\n";
		return 0;
	}
	for(i=0;i<mm;i++)
		cout<<s[i];
	cout<<endl;
	return 0;
}