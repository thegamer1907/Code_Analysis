#include <bits/stdc++.h>
using namespace std;
static const int N=100010;
typedef long long ll;
int i,j,k,n,m,x,y,a[N],tim[N],ti,pl=1,pr=0;
ll f[N][21],b[N],tot,t;
void solve(int l,int r,int L,int R){
	if (l>r)return;
	int mid=l+r>>1,x;
	int mx=min(mid,R);
	while (pr<mid) t+=b[a[++pr]]++;while (pr>mid) t-=--b[a[pr--]];
	while (pl<mx) t-=--b[a[pl++]];while (pl>mx) t+=b[a[--pl]]++;
	ti++;f[mid][j]=1ll<<60;
	for (int i=mx;i>=L;i--){
		tot++;
//		printf("---\n");
//		printf("%d %d %lld\n",i,mid,t);
//		for (int j=1;j<=n;j++)printf("%lld ",b[j]);printf("\n");
//		printf("---\n");
//		printf("#%d %lld %lld\n",i-1,f[i-1][j-1],f[mid][j]);
		if (f[i-1][j-1]+t<=f[mid][j]){f[mid][j]=f[i-1][j-1]+t,x=i;}
		t+=b[a[--pl]]++;
	}
	solve(l,mid-1,L,x);solve(mid+1,r,x,R);
}
int main(){
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++)scanf("%d",&a[i]);
	ti=1;for (i=1;i<=n;i++)f[i][0]=f[i-1][0]+b[a[i]]++;
	memset(b,0,sizeof b);
	for (j=1;j<m;j++)solve(1,n,1,n);

//	for (j=0;j<m;j++){
//		for (i=1;i<=n;i++)printf("%lld ",f[i][j]);
//		printf("\n");
//	}

	printf("%lld\n",f[n][m-1]);
	return 0;
}