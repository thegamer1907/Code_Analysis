/* ****GT_18**** */

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
using namespace std;

#define N  100005

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll i,n,x;
		cin>>n;
		vector <ll> v;
		rep(i,0,n)
			{cin>>x;v.pb(x);}
		sort(all(v));
		if(n==1)
			cout<<1;
		else
		{
			ll ans=0,j=n/2-1;
			for(i=n-1;i>(n-1)/2;i--)
			{
				while((j>=0)&&(2*v[j]>v[i]))
					j--;
				if(j!=-1)
					{ans++;j--;}
				else
					break;
			}
			cout<<n-ans;
		}
	}
	return 0;
}