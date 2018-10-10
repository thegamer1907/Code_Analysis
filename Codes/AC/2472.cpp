//coded by dsingh_24
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pll         pair<long long,long long>
#define vll          vector<long long>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (long long)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;\
ll a[1000005];
ll x[10000006],ma[10000005];
vll prime;
int sieve()
{
	ll i,j;
	for(i=2;i<=10000002;i++)
	{
		if(x[i]==0)
		{
			for(j=i;j<=10000002;j+=i)
			if(x[j]==0)
			x[j]=i;
		}
	}
    
}
int main()
{
	ios
	sieve();
    ll n,i,j,m;
    cin>>n;x[1]=1;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)
    {
    	ll t=a[i];
    	while(t>1)
    	{
    		ma[x[t]]++; ll p=x[t];
    		while(t%p==0&&t>1)t/=p;
		}
	}
	for(i=1;i<10000003;i++)ma[i]+=ma[i-1];
    cin>>m;
    while(m--)
    {
    	ll l,r;
    	cin>>l>>r;
    	l=min(l,10000000LL);
    	r=min(r,10000000LL);
    	ll ans=ma[r]-ma[l-1];
    	cout<<ans<<"\n";
	}
	return 0;
}
