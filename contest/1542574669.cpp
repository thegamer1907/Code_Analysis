#include<cstdio>
using namespace std;
int sum[16],n,k,x;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int tmp=0;
		for(int j=1;j<=k;j++){
			scanf("%d",&x);tmp=(tmp<<1)|x;
		}sum[tmp]++;
	}if(sum[0]){puts("YES");return 0;}
	for(int i=1;i<(1<<k);i++){
		if(!sum[i])continue;
		for(int j=1;j<(1<<k);j++){
			if(!(i&j)&&sum[j]){puts("YES");return 0;}
		}
	}puts("NO");
}