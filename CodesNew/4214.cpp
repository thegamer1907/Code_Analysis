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
		ll n,q;
		cin>>n>>q;
		vi a(n);
		rep(i,0,n)
		cin>>a[i];
		rep(i,1,n)
		a[i]+=a[i-1];
		ll rem=0;
		rep(i,0,q)
		{
			ll x;
			cin>>x;
			rem+=x;
			ll ub=ubnd(all(a),rem)-a.begin();
			if(ub==n)
				ub=0,rem=0;
			cout<<n-ub<<endl;
		}
	}
	return 0;
}