#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fir first
#define sec second

#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

int main()
{
    FAST;

    ll n,m,k,x,y,i,ans=0;
    cin >> n >> m >> k;
    x=k;
    y=0;

    ll a[m];
    for(i=0;i<m;i++)
    {
    	cin >> a[i];
    }

    i=0;
    while(i<m)
    {
    	y=0;
    	while(a[i]<=x && i<m)
    	{
    		y++;
    		i++;
    	}
    	if(y==0)
    	{
    		while(a[i]>x && x!=n)
    		{
				x=min(x+k,n);
    		}
    	}
    	else
    	{
    		ans++;
 			x=min(x+y,n);
 		}
    }

    cout << ans;
}