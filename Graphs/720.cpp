#include<stdio.h>
#include<string.h>
int main()
{
	int n,t,i,x;
	scanf("%d %d",&n,&t);
	char a[n+1];
	scanf("%s",a);
	x=1;
	while(x<=t){
		x++;
for(i=0;i<n;i++)
	{
		if((a[i]=='B')&&(a[i+1]=='G'))
     {a[i]='G';
     	a[i+1]='B';
     	i++;}}}
     	printf("%s",a);



return 0;}