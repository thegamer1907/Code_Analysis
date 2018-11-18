#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define dep(i,a,b) for(int i=a;i>=b;i--)
#define mem(x,num) memset(x,num,sizeof x)
#define LL unsigned long long
using namespace std;
const int maxn=100006,inf=0x3f3f3f;
int n,k,a[maxn],t[maxn],p,q;
LL f[maxn],g[maxn],now;
 
void solve(int l1,int r1,int l2,int r2){
	if(l1>r1)return;
	int mid=(l1+r1)/2,temp=min(r2,mid);
	LL mv=1e19;
	while(q<mid)now+=t[a[++q]]++;
	while(p>temp+1)now+=t[a[--p]]++;
	while(q>mid)now-=--t[a[q--]];
	while(p<temp+1)now-=--t[a[p++]];
	dep(i,temp,l2){
		int x=a[i];
		now+=t[a[--p]]++;
		if(now+f[i-1]<mv)mv=now+f[i-1],temp=i;
	}
	g[mid]=mv;
	solve(l1,mid-1,l2,temp);
	solve(mid+1,r1,temp,r2);
}
int main(){
    scanf("%d%d",&n,&k);
	rep(i,1,n)scanf("%d",&a[i]);
	mem(f,inf);
	f[0]=0;
	rep(i,1,k){
		p=1,q=now=0;
		mem(t,0);
		solve(i,n,i,n);
		memcpy(f,g,sizeof f);
	}
	printf("%I64d\n",f[n]);
	return 0;
}
