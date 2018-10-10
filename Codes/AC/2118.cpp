#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<map>
#define ll long long 
using namespace std;
const int maxn=500010;
int n,m,x,y,z,tot,k,a[maxn],b[maxn],lisan[maxn];
ll tree1[maxn],tree2[maxn],ans;
void read(int &k)
{
	int f=1;k=0;char c=getchar();
	while(c<'0'||c>'9')c=='-'&&(f=-1),c=getchar();
	while(c<='9'&&c>='0')k=k*10+c-'0',c=getchar();
	k*=f;
}
int find(int x)
{
	int l=1,r=tot;
	while(l<r)
	{
		int mid=(l+r)>>1;
		if(lisan[mid]==x)return mid;
		if(lisan[mid]>x)r=mid-1;
		else l=mid+1;
	}
	if(lisan[l]==x)return l;
	return 0;
}
int lowbit(int x){return x&-x;}
void add1(int x,int delta){for(;x<=n;x+=lowbit(x))tree1[x]+=delta;}
void add2(int x,int delta){for(;x<=n;x+=lowbit(x))tree2[x]+=delta;}
ll calcsum1(int x){ll ret=0;for(;x;x-=lowbit(x))ret+=tree1[x];return ret;}
ll calcsum2(int x){ll ret=0;for(;x;x-=lowbit(x))ret+=tree2[x];return ret;}
int main()
{
	read(n);read(k);
	for(int i=1;i<=n;i++)read(a[i]),b[i]=a[i];
	sort(b+1,b+1+n);
	lisan[++tot]=b[1];
	for(int i=2;i<=n;i++)
	if(b[i]!=b[i-1])lisan[++tot]=b[i];
	for(int i=1;i<=n;i++)
	{
		int ai=find(a[i]);
		if(!(a[i]%k))
		{
			int x=find(a[i]/k);
			if(x)
			{
				ans+=calcsum2(x)-calcsum2(x-1);
				add2(ai,calcsum1(x)-calcsum1(x-1));
			}
		}
		add1(ai,1);
	}
	printf("%I64d\n",ans);
	return 0;
}