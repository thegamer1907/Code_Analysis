#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef vector<long long> vll;

#define PI 3.141592653589793
#define N 100005

int main()
{
    IOS;
    ll n;
    cin>>n;
    ll a[n],ans=0,x=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(a[i]==1)
    		x++;
    }
    for(ll i=0;i<n;i++)
    {
    	for(ll j=i;j<n;j++)
    	{
    		ll c1=0,c2=0;
    		for(ll k=i;k<=j;k++)
    		{
    			if(a[k])
    				c1++;
    			else
    				c2++;
    		}
    		ans=max(ans,x-c1+c2);
    	}
    }
    cout<<ans<<endl;
    return 0;
}
