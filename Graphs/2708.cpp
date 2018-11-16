#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=200005;
int d[N],g[N],l,a[N],cnt,tot,n,m,x,y,z,fi[N],ne[N],zz[N],sl[N],dis[N],v[N];
void jb(int x,int y,int z){
	ne[++tot]=fi[x];
	fi[x]=tot;
	zz[tot]=y;
	sl[tot]=z;
}
void up(int x){
	if (x==1)return;
	if (dis[d[x/2]]>dis[d[x]]){
		swap(d[x/2],d[x]);
		swap(g[d[x/2]],g[d[x]]);
		up(x/2);
	}
}
void down(int x){
	int i=x;
	if (x*2<=l&&dis[d[x*2]]<dis[d[x]])i=x*2;
	if (x*2<l&&dis[d[x*2+1]]<dis[d[i]])i=x*2+1;
	if (i!=x){
		swap(d[i],d[x]);
		swap(g[d[i]],g[d[x]]);
		down(i);
	}
}
signed main(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		scanf("%lld%lld%lld",&x,&y,&z);
		jb(x,y,z);jb(y,x,z);
	}
	for (int i=1;i<=n;i++)dis[i]=1e16,d[i]=g[i]=i;
	dis[1]=0;l=n;
	for (int i=1;i<=n;i++){
		int k=d[1];
		d[1]=d[l--];
		g[d[1]]=1;
		down(1);
		for (int j=fi[k];j;j=ne[j])
			if (dis[zz[j]]>dis[k]+sl[j]){
				dis[zz[j]]=dis[k]+sl[j];
				v[zz[j]]=k;
				up(g[zz[j]]);
			}
	}
	if (dis[n]==1e16){
		puts("-1");
		return 0;
	}
	while (n){
		a[++cnt]=n;
		n=v[n];
	}
	for (int i=cnt;i;i--)printf("%d ",a[i]);
}