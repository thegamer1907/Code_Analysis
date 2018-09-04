/* ****hellojarvis**** */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define io	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

#define N 

int main()
{
	io
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll i,j,n,d,ffa[100005],fma[100005],alia,ans=-1;
		pair<ll,ll> f[100005];
		
		cin>>n>>d;
		for(i=0;i<n;i++)
		{
			cin>>f[i].F>>f[i].S;
			fma[i]=f[i].F;
		}
		sort(f,f+n);
		sort(fma,fma+n);

		ffa[0]=f[0].S;

		for(i=1;i<n;i++)
		{
			ffa[i]=ffa[i-1]+f[i].S;
		}
		for(i=0;i<n;i++)
		{
			alia=(lbnd(fma,fma+n,fma[i]+d)-fma);
			if(!i){alia=ffa[alia-1];}
			else
			{alia=(ffa[alia-1]-ffa[i-1]);}
			ans=max(ans,alia);
		}
		cout<<ans;

	}
	return 0;
}