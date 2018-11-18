#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define re register
#define LL long long
#define N 100005
using namespace std;
int n,K,col[N],cnt[N];
LL fc[N],gc[N],*f=fc,*g=gc;
void solve(int l,int r,int d_l,int d_r,LL w){
	if(l>r) return;
	re int mid=(l+r)>>1,d_k=0,p=mid<d_r?mid:d_r;
	for(re int i=l;i<=mid;++i) w+=cnt[col[i]]++;
	for(re int i=d_l;i<=p;++i) w-=--cnt[col[i]],g[mid]>f[i]+w?g[mid]=f[i]+w,d_k=i:0;
	for(re int i=d_l;i<=p;++i) w+=cnt[col[i]]++;
	for(re int i=l;i<=mid;++i) w-=--cnt[col[i]];
	solve(l,mid-1,d_l,d_k,w);
	for(re int i=l;i<=mid;++i) w+=cnt[col[i]]++;
	for(re int i=d_l;i<d_k;++i) w-=--cnt[col[i]];
	solve(mid+1,r,d_k,d_r,w);
	for(re int i=d_l;i<d_k;++i) ++cnt[col[i]];
	for(re int i=l;i<=mid;++i) --cnt[col[i]];
}
int main(){
	scanf("%d%d",&n,&K); re LL *tmp;
	for(re int i=1;i<=n;++i) scanf("%d",&col[i]);
	for(re int i=1;i<=n;++i) f[i]=f[i-1]+cnt[col[i]]++;
	memset(cnt,0,sizeof(cnt));
	while(--K){
		memset(g,1,(n+1)<<3);
		solve(1,n,1,n,0);
		tmp=f; f=g; g=tmp;
	}
	printf("%lld\n",f[n]);
	return 0;
}