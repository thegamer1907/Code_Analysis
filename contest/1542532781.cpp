#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
ll d[25][100005],c[100005];
int n,m,a[100005],sum[100005];
void solve(ll *g,ll *f,int l,int r,int L,int R,ll ans){
	int mid=l+r>>1,M;
	f[mid]=1e15;
	for(int i=l;i<=mid;i++) ans+=sum[a[i]]++;
	for(int i=L;i<=mid&&i<=R;++i){
		ans-=(--sum[a[i]]);
		if(g[i]+ans<f[mid]){
			f[mid]=g[i]+ans;M=i;
		}
	}
	for(int i=l;i<=mid;i++) ans-=--sum[a[i]];
	for(int i=L;i<=mid&&i<=R;i++) ans+=(sum[a[i]]++);
	if(l<mid) solve(g,f,l,mid-1,L,M,ans);
	for(int i=L;i<M;i++) ans-=(--sum[a[i]]);
	for(int i=l;i<=mid;i++) ans+=(sum[a[i]]++);
	if(r>mid) solve(g,f,mid+1,r,M,R,ans);
	for(int i=L;i<M;i++) ++sum[a[i]];
	for(int i=l;i<=mid;i++) --sum[a[i]];
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<=100002;i++) c[i]=1LL*i*(i-1)/2;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		d[1][i]=d[1][i-1]+sum[a[i]];
		sum[a[i]]++;
	}
	memset(sum,0,sizeof(sum));
	for(int i=2;i<=m;i++){
		solve(d[i-1],d[i],1,n,1,n,0);
	}
	printf("%I64d",d[m][n]);
	return 0;
}
