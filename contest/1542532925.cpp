#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
int n,a[N],m,t[N],p=1,q=0;ll f[N][22],tot=0;
inline void upd(int l,int r){
	while(q<r)q++,tot+=t[a[q]],t[a[q]]++;
	while(p>l)p--,tot+=t[a[p]],t[a[p]]++;
	while(q>r)t[a[q]]--,tot-=t[a[q]],q--;
	while(p<l)t[a[p]]--,tot-=t[a[p]],p++;
}
inline void solve(int l,int r,int L,int R,int k){
	if(l==r){
		for(int i=min(R,r);i>=L;i--)
			upd(i+1,l),f[l][k]=min(f[l][k],f[i][k-1]+tot);
		return ;
	}
	int mid=(l+r)>>1,st=0;
	for(int i=min(mid-1,R);i>=L;i--){
		upd(i+1,mid);
		if(tot+f[i][k-1]<f[mid][k])f[mid][k]=tot+f[i][k-1],st=i;
	}
	if(st)solve(l,mid,L,st,k),solve(mid+1,r,st,R,k);
	else solve(mid+1,r,L,R,k);
}
int main(){
  scanf("%d%d",&n,&m);
  for(int i=1;i<=n;i++)scanf("%d",&a[i]);
  memset(f,127/3,sizeof(f));f[0][1]=0;
  for(int i=1;i<=n;i++)f[i][1]=f[i-1][1]+t[a[i]],t[a[i]]++;
  memset(t,0,sizeof(t));
  for(int i=2;i<=m;i++)
	  solve(1,n,1,n,i);
  cout<<f[n][m]<<endl;
  return 0;
}
