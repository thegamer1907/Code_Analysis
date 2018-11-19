#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int i,j,k,n,m,lim,a[21],t,b[21];
bool dfs(int x,int v){
	int i;
	if (x==lim){
		if (!v) return 0;
		for (i=1;i<=m;i++)
		 if (b[i]>0) return 0;
		return 1;
	}
	if (dfs(x+1,v)) return 1;
	if (a[x]){
		for (i=0;i<m;i++)
		 if ((x>>i)&1) b[i+1]++;else b[i+1]--;
		if (dfs(x+1,1)) return 1;
		for (i=0;i<m;i++)
		 if ((x>>i)&1) b[i+1]--;else b[i+1]++;
	}
	return 0;
}
int main(){
	scanf("%d%d",&n,&m);memset(a,0,sizeof(a));memset(b,0,sizeof(b));lim=(1<<m);
	for (i=1;i<=n;i++){
		for (j=1,k=0;j<=m;j++) scanf("%d",&t),k=k*2+t;
		a[k]++;
	}
	if (dfs(0,0)) puts("YES");else puts("NO");
	return 0;
}