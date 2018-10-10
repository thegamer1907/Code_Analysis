#include<bits/stdc++.h>
#define ll int
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define an size()
#define all(x)   (x).begin(),(x).end()
#define ld long double 
#define FOR(i,a,b) for(ll (i)=(a) ; (i)<(b) ; (i)++)

using namespace :: std;

const ll maxn=1e6+500;

ll f[maxn];
ll cnt[maxn];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;

	cin>>s;
	ll n=s.an;
	ll k=-1;
f[0]=-1;
	for(ll i=1;i<n;i++)
	{
		while(s[k+1]!=s[i] &&k>=0)
		{
			k=f[k];
		}
		if(s[k+1]==s[i])
			k++;

		f[i]=k;
	}


	for(ll i=0;i<n;i++)
	{
//		cout<<f[i]<<endl;
		cnt[f[i]]++;
	}




	k=f[n-1];
	if(k==-1)
	{
		cout<<"Just a legend";
		return 0;
	}

	if(cnt[k]>1)
	{
		cout<<s.substr(0,1+k);
		return 0;
	}
	k=f[k];
	if(k==-1)
	{
		cout<<"Just a legend";
		return 0;
	}


	cout<< s.substr(0,1+k);
}

