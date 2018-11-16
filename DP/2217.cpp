#include<cstdio>
int a[100005];
int b[100005];
int ans[100005];
int main (){
	int n,m,k;
	scanf("%d%d",&n,&m);
	k=0;
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
		if (b[a[i]]==1) k++;
	}
	for (int i=1;i<=n;i++){
		ans[i]=k;
		b[a[i]]--;
		if (b[a[i]]==0) k--;
	}
	for (int i=1;i<=m;i++){
		scanf("%d",&k);
		printf("%d\n",ans[k]);
	}
	return 0;
}
