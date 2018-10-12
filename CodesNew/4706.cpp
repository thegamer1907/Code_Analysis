/* ****HARRYoo7**** */

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
		ll n;
		cin>>n;
		vi v(n);
		rep(i,0,n)
			cin>>v[i];
		sort(all(v));
		ll count=0;
		vi se;
		rep(i,n/2,n)
			se.pb(v[i]);
		ll temp=0;
		rep(i,0,n/2)
		{
			ll pos=lbnd(all(se),2*v[i])-se.begin();
			pos=max(temp,pos);
			if(pos!=se.size())
			{
				count++;
				temp=pos+1;
			}
		}
		cout<<n-count;
	}
	return 0;
}