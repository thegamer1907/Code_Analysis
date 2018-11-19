#include<bits/stdc++.h>
#define ll long long
#define N 100009
using namespace std;

int n,m,L=1,R,a[N],c[N]; ll res,f[N],g[N];
struct node{ int l,r,x,y; }h[N<<2];
void add(int x,int y){
	if (y>0){
		res+=c[a[x]]; c[a[x]]++;
	} else{
		c[a[x]]--; res-=c[a[x]];
	}
}
ll calc(int x,int y){
	while (L>x) add(--L,1); while (R<y) add(++R,1);
	while (L<x) add(L++,-1); while (R>y) add(R--,-1);
	return res;
}
void solve(){
	int i,k,mid,head=0,tail=1; ll tmp; node u;
	h[1]=(node){1,n,1,n};
	while (head<tail){
		u=h[++head];
		mid=u.l+u.r>>1;
		for (i=k=u.x; i<=u.y && i<=mid; i++){
			tmp=g[i-1]+calc(i,mid);
			if (tmp<f[mid]){
				f[mid]=tmp; k=i;
			}
		}
		if (u.l<mid) h[++tail]=(node){u.l,mid-1,u.x,k};
		if (mid<u.r) h[++tail]=(node){mid+1,u.r,k,u.y};
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i;
	for (i=1; i<=n; i++) scanf("%d",&a[i]);
	memset(f,60,sizeof(f));
	memset(g,60,sizeof(g)); g[0]=0;
	while (m--){
		solve();
		for (i=0; i<=n; i++) g[i]=f[i];
	}
	printf("%lld\n",f[n]);
	return 0;
}
