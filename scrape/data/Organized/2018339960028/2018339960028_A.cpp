#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string> 
using namespace std;
typedef long long ll;
ll n,m,k;
ll a[100005];
int main()
{
	scanf("%lld%lld%lld",&n,&m,&k);
		for(ll i=0;i<m;i++)
		scanf("%lld",&a[i]);
		ll l,ans=0,t=0,y=0;
		int flag=0;
		
		
		for(ll i=0;i<m;i++)
		{
		if(flag==0)
		{
		l=(a[i]-y-1)/k;
		flag=1;
		t++;
     	}
	    else if(flag==1)
	    {
	    	if(l==(a[i]-y-1)/k)
	    	t++;
	    	else
	    	{
	    		y=t;
	    		ans++;
	    		flag=0;
	    		i--;
			}
	    	
		}
		if(i==m-1&&flag==1)
		ans++;
		}
		
	printf("%lld\n",ans);	
	
	return 0;
}