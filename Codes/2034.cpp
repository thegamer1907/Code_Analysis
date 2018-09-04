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
using namespace std;
int main()
{
	ios
    ll n,k,i,j,ans=0;
    cin>>n>>k;
    ll a[n+1];
    map<ll,ll>m;
    map<ll,ll>m1;
    for(i=0;i<n;i++)
	{
		cin>>a[i];m[a[i]]++;
	}
    if(k==1)
    {
    	for(auto i:m)
    	{
    		if(i.S>=3)ans+=(i.S*(i.S-1)*(i.S-2))/6;
		}
		cout<<ans;return 0;
	}
	m[a[0]]--;m1[a[0]]++;m[a[1]]--;
	for(i=1;i<n-1;i++)
	{
		if(a[i]%k==0)
		{
			ans+=(m1[a[i]/k]*m[a[i]*k]);
		}
		m1[a[i]]++;m[a[i+1]]--;
	}
	cout<<ans;
	return 0;
}
