#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++){
		int tmp=0,x=0;
		for (int j=0;j<k;j++) {
			scanf("%d",&x);
			tmp=tmp+(x<<j);
		}
		a[tmp]=1;
	}
	int tmp=(1<<k)-1;
	if (a[0]) {
		printf("YES\n");
		return 0;
		}
	//printf("%d\n",1&2);
	for (int i=0;i<=tmp;i++) 
		for (int j=0;j<=tmp;j++) {
		//printf("%d %d %d\n",a[i],a[j],i&j);
		if (a[i]==1&&a[j]==1&&((i&j)==0)){
		printf("YES\n");
		return 0;
		}
		}
	printf("NO\n");
}
