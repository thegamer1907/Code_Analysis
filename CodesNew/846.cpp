#include<stdio.h>
#include<string.h>
char a[1000][510],b[1000][510];
int main()
{
	int n,m,c=0,d,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<m;i++)
		scanf("%s",b[i]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(strcmp(a[i],b[j])==0) 
			c=c+1;
		}
	if(c%2==0){
		if(n>m) printf("YES");
		else printf("NO");
	}
	else{
		if(n+1>m) printf("YES");
		else printf("NO"); 
	}
	return 0;
}
