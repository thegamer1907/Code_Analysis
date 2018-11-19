#include<cstdio>

const int maxn=20;
int n,k;
bool vis[maxn];
int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++){
		int res=0;
		for (int j=1,x;j<=k;j++)
		 scanf("%d",&x),res=res<<1|x;
		vis[res]=1;
	}
	for (int i=0;i<=15;i++)
	 for (int j=0;j<=15;j++)
	  if (vis[i]&&vis[j]&&(i&j)==0) return printf("YES"),0;
	printf("NO");
	return 0;
}