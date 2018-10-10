/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 April 2018 (Wednesday)
* Time:        10:26
*/

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,d;
    cin>>n>>d;
    vector<pair<ll,ll> > a(n);
    vector<ll> tp(n);
    vector<ll> cum(n);
    for(int i=0;i<n;i++)
    {
    	cin>>a[i].ff>>a[i].ss;
    	tp[i] = a[i].ff;
    }
    sort(all(a));
    sort(all(tp));
    for(int i=0;i<n;i++)
    {
        if(i==0)
            cum[i] = a[i].ss;
        else
            cum[i] = a[i].ss+cum[i-1];
    }
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
    	int pos = lower_bound(all(tp),tp[i]+d) - tp.begin();
    	pos--;
    	if(i==0)
    		ans = max(ans,cum[pos]);
    	else
    		ans = max(ans,cum[pos] - cum[i-1]);
    }
    cout<<ans;
    return 0;
}
