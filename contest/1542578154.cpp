#include<bits/stdc++.h>
#define N 200005
using namespace std;
typedef long long LL;
const LL oo=1e18;
LL G[N],F[N],now;
int num[N],a[N],col[N],Case,n,m,i,k,L,R;
void add(int val){
	//if (col[val]!=Case) 
	  //col[val]=Case,num[val]=0;
	now+=num[val]++;
}
void del(int val){
	now-=(--num[val]);
}
void solve(int l,int r,int ml,int mr){
	int mid=(l+r)>>1,st=min(mr,mid-1);
	int tmpL=L,tmpR=R;
	for (;R<mid;add(a[++R]));
	for (;L>st+1;add(a[--L]));
	for (;R>mid;del(a[R--]));
	for (;L<st+1;del(a[L++]));
	F[mid]=oo;int id=0;
	for (int i=st;i>=ml;i--){
		if (G[i]+now<F[mid])
		  F[mid]=G[i]+now,id=i;
		add(a[--L]);
	}
	if (l<mid) solve(l,mid-1,ml,id);
	if (mid<r) solve(mid+1,r,id,mr);
  for (;R<tmpR;add(a[++R]));
  for (;L>tmpL;add(a[--L]));
  for (;R>tmpR;del(a[R--]));
  for (;L<tmpL;del(a[L++]));
}
int main(){
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++)
	  scanf("%d",&a[i]);
	G[0]=0;for (i=1;i<=n;i++) G[i]=oo;
	for (k=1;k<=m;k++){
		for (i=1;i<=n;i++) num[i]=0;now=0;
		L=1;R=0;solve(1,n,0,n-1);
		for (i=0;i<=n;i++) 
		  G[i]=F[i];
	}
	printf("%lld\n",F[n]);
}