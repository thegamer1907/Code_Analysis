#include <iostream>
#include <cstdio>
#include <cstring>
#define ll long long
using namespace std;
inline ll read()
{
	ll x=0,f=1;char c=getchar();
	for(;c<'0'||c>'9';c=getchar())if(c=='-')f=-1;
	for(;c>='0'&&c<='9';c=getchar())x=x*10+c-'0';
	return x*f;
}
ll f[100010],g[100010],n,k,p,q,now,t[100010];
ll a[100010];
inline void work(ll l1,ll r1,ll l2,ll r2)
{
	if (l1>r1) return;
	ll mid=(l1+r1)/2,tem=min(r2,mid);
	unsigned ll ret=1e19;
	while (q<mid) now+=t[a[++q]]++;
	while (p>tem+1) now+=t[a[--p]]++;
	while (q>mid) now-=--t[a[q--]];
	while (p<tem+1) now-=--t[a[p++]];
	ll x;
	for (ll i=tem;i>=l2;i--)
	{
		x=a[i];
		now+=t[a[--p]]++;
		if (now+f[i-1]<ret) ret=now+f[i-1],tem=i;
	}
	g[mid]=ret;
	work(l1,mid-1,l2,tem);
	work(mid+1,r1,tem,r2);
}
int main()
{
	n=read(),k=read();
	for (ll i=1;i<=n;i++) a[i]=read();
	memset(f,0x3f3f3f3f,sizeof(f));
	f[0]=0;
	for (ll i=1;i<=k;i++)
	{
		memset(t,0,sizeof(t));
		p=1,q=now=0;
		work(i,n,i,n);
		for (ll j=1;j<=n;j++) f[j]=g[j];
	}
	printf("%lld",f[n]);
	return 0;
}
		   		 	   	    	   	    			 	