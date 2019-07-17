#include<bits/stdc++.h>
#define ll long long
#define mod 1000000009
ll max(ll A,ll b){ if(A>b) return A; return b;}
ll min(ll A,ll b){ if(A<b) return A; return b;}
using namespace std;
/******************* MY MAIN CODE STARTS HERE ************************/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll n,m,k;
	cin>>n>>m>>k;
	set<ll>s;
	for(int i=0;i<m;i++)
	{
		ll a;
		cin>>a;
	   s.insert(a);
	}
	  
	ll ans=0;
	ll last_of_page=k;
    set<ll>::iterator it=s.begin();
	ll x=m;
	while(x)
	{
		ll count=0;
		while(last_of_page>=*it )
		{
			count++;
			x--;
			it++;
			if(it==s.end())
			break;
		}
		if(count==0)
		{
			ll diff=(*it)-last_of_page;
			if(diff/k==0)
			last_of_page+=k;
		    else last_of_page+=(diff/k)*k;
	    }
		else 
		{
		  last_of_page+=count;
		  ans++;
	    }
	    
	}
	cout<<ans<<endl;
	
}