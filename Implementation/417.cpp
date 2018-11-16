/* ****GT_18**** */

#include<bits/stdc++.h>
#define int         long long
#define ll 			long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n+1];
		rep(i,1,n+1)
		cin>>a[i];
		sort(a+1,a+n);
		reverse(a+1,a+n);
		int cnt=0;
		rep(i,1,n+1)
		if(a[k]<=a[i]&&a[i])
			cnt++;
		cout<<cnt;
	}
	return 0;
}