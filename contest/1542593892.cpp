#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define all(v) v.begin(),v.end()
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll n,f=0;
	cin>>n;
	vector<string> v(n);
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==s)
		{
			cout<<"YES"<<endl;
			f=1;
		}
	}
	if(f==1)
		return 0;
	for(ll i=0;i<n;i++)
	{
		if(v[i][1]==s[0])
		{
			for(ll j=0;j<n;j++)
			{
				if(v[j][0]==s[1])
				{
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;	
}