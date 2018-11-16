#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int p[105],a[105];
	for(int i=1;i<=n;i++){
		scanf("%d",&p[i]);
		a[p[i]]=i;
	}
	for(int i=1;i<n;i++) printf("%d ",a[i]);
	printf("%d\n",a[n]);
	return 0;
}
