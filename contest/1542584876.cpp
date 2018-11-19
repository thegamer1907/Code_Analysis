#include<cstdio>
using namespace std;
int n,k,w[5][100005],num[16];
int main(void){
	register int i,j,o,now;
	scanf("%d%d",&n,&k);
	for(j=1;j<=n;++j){
		o=1,now=0;
		for(i=1;i<=k;++i)
			scanf("%d",&w[i][j]),now+=w[i][j]*o,o<<=1;
		++num[now];
	}
	if(num[0]){
		puts("YES");
		return 0;
	}
	for(i=0;i<1<<k;++i)
		for(j=0;j<1<<k;++j)
			if(i!=j&&num[i]&&num[j])
				if((i&j)==0){
					puts("YES");
					return 0;
				}
	puts("NO");
	return 0;
}