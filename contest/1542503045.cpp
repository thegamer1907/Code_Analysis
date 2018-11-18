#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
#define MN 100005
#define mid (l+r>>1)
int n,k,a[MN],cnt[MN],p,q;
ll f[MN],g[MN],now;
void dfs(int l,int r,int from,int to){
	if(l>r) return;int gg=min(to,mid);ll ff=1e19;
	while(q<mid)  now+=cnt[a[++q]]++;
	while(p>gg+1) now+=cnt[a[--p]]++;
	while(q>mid)  now-=--cnt[a[q--]];
	while(p<gg+1) now-=--cnt[a[p++]];
	for(int i=gg;i>=from;i--){
		now+=cnt[a[--p]]++;
		if(now+f[i-1]<ff)ff=now+f[i-1],gg=i;
	}
	g[mid]=ff;
	dfs(l,mid-1,from,gg);dfs(mid+1,r,gg,to);
}
int main(){
    scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	memset(f,0x3f,sizeof f);f[0]=0;
	for(int i=1;i<=k;i++){
		p=1,q=now=0;memset(cnt,0,sizeof cnt);
		dfs(i,n,i,n);
		memcpy(f,g,sizeof f);
	}
	printf("%lld\n",f[n]);
	return 0;
}
