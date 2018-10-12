#include<bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define ll long long
#define db double
#define pb push_back
#define ld long double
#define INF INT_MAX
#define M LONG_LONG_MAX

ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main()
{
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    IOS
    ll n,i,a;
    cin>>n;
    vector <ll> v;
    for(i=0;i<n;i++)
    {
    	cin>>a;
    	v.pb(a);
    }
    sort(v.begin(),v.end());
    ll j=0,ans=n;
    for(i=n/2;i<n&&j<n/2;i++)
    {
    	if(v[i]>=2*v[j])
    	{
    		ans--;
    		j++;
    	}
    }
    cout<<ans;
    return 0;
}	