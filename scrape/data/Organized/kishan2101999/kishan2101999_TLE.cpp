#include<bits/stdc++.h>
    using namespace std;
    #define ll long long 
    #define For(i,a,b) for ( long long   i=a;i<b;i++)
    #define all(a) a.begin(),a.end()
    #define SYNC ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int main()
    {
    	SYNC
    	ll n,m,k;
    	cin>>n>>m>>k;
    	vector<ll> p(m);
    	For(i,0,m)
    	{
    		cin>>p[i];
		}
		ll t=k;
		ll count=0;
		ll ans=0;
		for (ll i=0;i<m;i++)
		{
			//cout<<p[i]<<endl;
			if (p[i]<=t)
			{
			 count++;	
			}
			else{
			if (count!=0)
			ans++;
			if (count!=0)
			t=t+count;
			else
			t+=k;
			count=0;
			//cout<<t;
			i--;	
			}
		}
		if (count!=0)
		ans=ans+1;
		cout<<ans;
		return 0;
	}