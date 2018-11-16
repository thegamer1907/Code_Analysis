
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
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
		ll n,k,i;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++) cin>>a[i];
		vector< pair<ll ,ll> > v;
		ll sum=0;
		for(i=0;i<k;i++) sum+=a[i];
		v.pb(mp(sum,0));
		for(i=1;i+k-1<n;i++){
			sum+=a[i+k-1];
			sum-=a[i-1];
			v.pb(mp(sum,i));
		}
		sort(all(v));
		cout<<v[0].S+1;
	}
	return 0;
}