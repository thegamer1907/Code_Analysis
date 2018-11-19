#include <cstdio>
using namespace std;
int i,j,m,n,x,now,k;
int ty[101];
bool flag;
int main(){
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		now=0;
		for(j=1;j<=k;j++){
			scanf("%d",&x);
			now+=(1<<(j-1))*x;
		}
		ty[now]++;
	}
	flag=false;
	for(i=0;i<=(1<<k)-1;i++){
		for(j=0;j<=(1<<k)-1;j++){
			if (((i&j)==0)&&(ty[i]>0)&&(ty[j]>0))flag=true;
		}
	}
	if (flag)printf("YES\n");
	else printf("NO\n");
	return 0;
}