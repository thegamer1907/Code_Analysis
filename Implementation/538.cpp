#include<stdio.h>
using namespace std;
int n,k,k0,a,b;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(i<=k&&a>0)k0++;
		if(b==a&&a>0)k0++;
		if(i==k)b=a;
	}
	printf("%d\n",k0);
	return 0;
}