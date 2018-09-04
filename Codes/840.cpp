#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define f first
#define s second
#define loop(x,n) for(ll x=0; x<n; x++)
#define extloop(x,y,n) for(ll x=y; x<n; x++)
	
int main()
{
    ios_base::sync_with_stdio(false);

    ll n,k;
    cin>>n>>k;

    ll dp[n+1]={0};

    for (ll i=1;i<=n;i++)	dp[i]=2*dp[i-1]+1;

    while (true)
    {
	    ll i;

	    for (i=1;i<=n;i++)
	    {
		    if (k<=dp[i])	break;
	    }

	    k-=dp[i-1];

	    if (k==0)	
	    {
		    cout<<1<<endl;
		    return 0;
	    }
	    else if (k==1)
	    {
		    cout<<i<<endl;
		    return 0;
	    }
	    else	k--;
    }
}
