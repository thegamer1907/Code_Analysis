/***************************************************************************
 * #######                    #                                            *
 *    #     #    #  ######   # #    #    #   ####   #    #  #    #  #      *
 *    #     #    #  #       #   #   ##   #  #       #    #  #    #  #      *
 *    #     ######  #####  #     #  # #  #   ####   ######  #    #  #      *
 *    #     #    #  #      #######  #  # #       #  #    #  #    #  #      *
 *    #     #    #  #      #     #  #   ##  #    #  #    #  #    #  #      *
 *    #     #    #  ###### #     #  #    #   ####   #    #   ####   ###### *
 ***************************************************************************/
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
		ll ans=n,j=(n/2)-1;
		rep(i,0,n)
		cin>>v[i];
		sort(all(v));
		for(ll i=n-1;i>=(n/2) && j>=0;i--)
		{
			while(j>=0 && v[i]<2*v[j])
				j--;
			if(j<0)
				break;
			j--;
			ans--;
		}
		cout<<ans;
	}
	return 0;
}