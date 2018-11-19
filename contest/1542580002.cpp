#include<cstdio>
int a[100];
int n,k,q[5];
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			scanf("%d",&q[j]);
		}
		a[q[1]+q[2]*2+q[3]*4+q[4]*8]=1;
	}
	if(a[0]){
		puts("YES");
		return 0;
	}
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			if((i&j)==0&&a[i]&&a[j]){
				puts("YES");return 0;
			}
		}
	}
	puts("NO");
	return 0;
}