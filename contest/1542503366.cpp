#include<cstdio>
int n,k,a[17],b[5];
int main(){
	scanf("%d%d",&n,&k);
	while(n--){
		for(int i=1;i<=k;i++)scanf("%d",&b[i]);
		a[b[1]+b[2]*2+b[3]*4+b[4]*8]=1;
	}
	for(int i=0;i<=(1<<k);i++){
		for(int j=0;j<=(1<<k);j++){
			if(!(i&j)&&a[i]&&a[j]){
				//printf("%d %d ",i,j);
				printf("YES\n");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}