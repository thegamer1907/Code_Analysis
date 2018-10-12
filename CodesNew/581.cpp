/*
 _     _                             
| |__ | |__   __ _  __ _ _   _  __ _ 
| '_ \| '_ \ / _` |/ _` | | | |/ _` |
| |_) | | | | (_| | (_| | |_| | (_| |
|_.__/|_| |_|\__,_|\__, |\__, |\__,_|
                   |___/ |___/       
*/
#include<bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define mpi         map<pair<ll int,ll int>,ll int>
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;

#define N  10000005

ll int spf[N];

void sieve()
{
	spf[1]=1;
	for(ll int i=2;i<N;i++)
	{
		spf[i]=2;
	}
	for(ll int i=3;i<N;i+=2)
	{
		spf[i]=i;
	}
	for(ll int i=3;i*i<N;i++)
	{
		if(spf[i]==i)
		{
			for(ll int j=i*i;j<N;j+=i)
			{
				if(spf[j]==j)
				{
					spf[j]=i;
				}
			}
		}
	}
}

vi f(ll int x)
{
	mii ma;
	while(x!=1)
	{
		ma[spf[x]]++;
		x/=spf[x];
	}
	vi ret;
	for(auto i:ma) ret.pb(i.F);
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll int n;
		cin>>n;
		sieve();
		vi v;
		for(ll int i=1;i<=n;i++)
		{
			ll int tmp;
			cin>>tmp;
			vi ret=f(tmp);
			for(auto i:ret) v.pb(i);
		}
		sort(all(v));
		ll int q;
		cin>>q;
		while(q--)
		{
			ll int l,r;
			cin>>l>>r;
			cout<<ubnd(all(v),r)-lbnd(all(v),l)<<endl;
		}
	}
	return 0;
}