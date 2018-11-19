#include<cstdio>
#include<algorithm>
using namespace std;
int n,K;
bool vis[100005];
int main(){
	scanf("%d%d",&n,&K);
	for(int i=1;i<=n;i++){
		int now=0,x;
		for(int j=1;j<=K;j++) scanf("%d",&x), now=(now<<1)+x;
		vis[now]=true;	
	}
	for(int i=0;i<=(1<<K)-1;i++)
	 for(int j=0;j<=(1<<K)-1;j++) if(vis[i]&&vis[j]){
	 	if((i&j)==0) return printf("YES\n"),0;
	 }
	printf("NO\n");
	return 0;
}