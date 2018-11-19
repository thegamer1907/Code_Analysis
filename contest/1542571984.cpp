#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
int a[100005],t[100005];
ll f[100005],g[100005],now;
int lp,rp,n,k;
inline int read()
{int x=0;
char c=getchar();
while (c<'0'||c>'9') c=getchar();
while (c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
return x;
}
void solve(int l,int r,int lt,int rt)
{if (l>r) return;
int mid=(l+r)>>1,pos=(mid>rt?rt:mid),i;
while (lp<pos) {t[a[lp]]--;now-=t[a[lp]];lp++;}
while (lp>pos) {lp--;now+=t[a[lp]];t[a[lp]]++;}
while (rp<mid) {rp++;now+=t[a[rp]];t[a[rp]]++;}
while (rp>mid) {t[a[rp]]--;now-=t[a[rp]];rp--;}
ll mx=f[pos-1]+now;
int pl=pos;
for (i=pos-1;i>=lt;i--)
{lp--;now+=t[a[lp]];t[a[lp]]++;
if (f[i-1]+now<mx) {mx=f[i-1]+now;pl=i;}
}
g[mid]=mx;
solve(l,mid-1,lt,pl);
solve(mid+1,r,pl,rt);
}
int main (){
	int i,j;
	n=read();k=read();
	for (i=1;i<=n;i++)
	{a[i]=read();}
	memset (f,0x7f,sizeof(f));
	f[0]=0;
	for (i=1;i<=k;i++)
	{lp=1;rp=0;now=0;
	memset (t,0,sizeof(t));
	solve(i,n,i,n);
	memcpy (f,g,sizeof(g));
	}
	printf ("%lld\n",f[n]);
	return 0;
}