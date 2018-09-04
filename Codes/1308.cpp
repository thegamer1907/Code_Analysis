#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>n>>m;
	ll pol=n,sec=m;
	map<string,ll> m1; 
	for(ll i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m1[s]=1;
	}
	int f=0;
	for(ll i=0;i<m;i++)
	{
		string s;
		cin>>s;
		if(m1[s]==1)
		{
			if(!f)
			{
				sec--;
				f=1;
			}
			else
			{
				pol--;
				f=0;
			}
		}
	}
	if(pol>sec)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}