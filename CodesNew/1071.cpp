#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e5+6,OO=0x3f3f3f3f;
char str[N];
vector<ll> v,v2;
ll n,k;
ll ok(ll md)
{   
ll sum=0;
	for(int i=0;i<n;i++)
	{
		v2[i]=v[i]+(md+1)*(i+1);
		
	}
	sort(v2.begin(),v2.end());
	for(int i=0;i<=md;i++)
	sum+=v2[i];

    return(sum <= k ? sum : 0);	
}
int main()
{
     scanf("%lld %lld",&n,&k);
     v.resize(n);
     v2.resize(n);
     ll s=0,ans1=0,ans2=0,md,e=n-1;
     for(int i=0;i<n;i++)
     scanf("%lld",&v[i]);
     while(s<=e)
     {
     	md=s+(e-s)/2;
     	ll res=ok(md);
     	if(res)
     	{
     		ans1=md+1,ans2=res,s=md+1;
	    }
	    else
	    e=md-1;
	 }
     printf("%lld %lld",ans1,ans2);
     puts("");
}
