#include<bits/stdc++.h>
using namespace std;
int vis[105];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int v=0;
		for(int j=1,u;j<=k;j++) scanf("%d",&u),v=v*2+u;
		vis[v]=1;
	}
	if(vis[0])	{printf("YES\n");return 0;}
	for(int i=1;i<=(1<<k)-1;i++)if(vis[i]){
		for(int j=1;j<=(1<<k)-1;j++)	if((i&j)==0&&vis[j]){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
}
