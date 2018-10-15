#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define repr(i,a,b) for(ll int i=a;i>b;i--) 
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define ordered_set tree<ll int, null_type,less<ll int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
using namespace __gnu_pbds;
int main()
{
	ll int n;
	cin >> n;
	ll int a[n];
	rep(i,0,n)cin >> a[i];
	sort(a,a+n);
	ll int i=0;
	ll int j=n/2;
	ll int count=0;
	while(i<n/2 and j<n)
	{
		if (a[j]>=2*a[i])
		{
			count++;
			i++;
			j++;
			continue;
		}
		else
		{
			j++;
			continue;
		}
	}
	cout << n-count << endl;
}