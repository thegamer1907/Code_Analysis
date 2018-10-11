#include <stdio.h>
#define MAX 100100

int v[MAX];

int main(){
	int n,t,s,k,i,j;
	scanf("%d%d",&n,&t);
	for(i=0;i<n;i++)scanf("%d",&v[i]);
	i=j=k=s=0;
	for(j=0;j<n;j++){
		s+=v[j];
		while(s>t){
			s-=v[i];
			i++;
		}
		if(j-i+1>k)k=j-i+1;
	}
	printf("%d\n",k);
	return 0;
}