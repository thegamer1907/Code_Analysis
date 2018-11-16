#include <stdio.h>
#include <string.h>

int main(){
	
	int n,m,i;
	scanf("%d %d",&n,&m);
	int en[n+1];
	for(i=1;i<=n;i++){
		scanf("%d",&en[i]);
	}
	int vi[100001];
	memset(vi,0,sizeof(vi));
	int di[n+1];
	di[n]=1;
	vi[en[n]]=1;
	for(i=n-1;i>0;i--){
		if(vi[en[i]]){
			di[i]=di[i+1];
		}
		else{
			di[i]=1+di[i+1];
			vi[en[i]]=1;
		}
	}
	int q;
	while(m--){
		scanf("%d",&q);
		printf("%d\n",di[q]);
	}
	 
	return 0;
}