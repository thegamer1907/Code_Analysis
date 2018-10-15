#include<bits/stdc++.h>
#define ll int
using namespace std;
ll a[100005];
int main()
{
	ll n,m,z=0,max1=-99999,t=0;
	scanf("%d%d",&n,&m);
	for (ll i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		z+=a[i];
		if(a[i]>=max1) max1=a[i];
	}
	ll w=0;
	for (ll i=max1;i<=100005;i++)
	{
		w=0;
		for (ll j=1;j<=n;j++)
		{
			w+=i-a[j];
		}
		if(w>=m) 
		{
			w=i;
			break;	
		}
	}
	printf("%d %d",w,max1+m);
	return 0;
}//