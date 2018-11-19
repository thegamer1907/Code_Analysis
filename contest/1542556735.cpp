#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
bool vis[22];
int main(){
	int n,k,x;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i) {
	int sum=0;
	for(int j=1;j<=k;++j) {
		scanf("%d",&x);
		if(x) sum+=1<<(j-1);
	}
	vis[sum]=1;
	}
	bool flag=0;
	for(int i=0;i<=15;++i) for(int j=0;j<=15;++j) if(((i&j)==0)&&vis[i]&&vis[j]) flag=1; 
	if(flag) puts("YES");else puts("NO");
}