#include <stdio.h>

int main()
{
	int n,t,i,j;
	char a[50];
	scanf("%d%d",&n,&t);
	scanf("%s",&a);
	for(i=0;i<t;i++)
		for(j=0;j<n;j++)
		{
			if(a[j]=='B'&&a[j+1]=='G')
			{
				a[j]='G';
				a[j+1]='B';
				j++;
			}
				
		}
	printf("%s\n",a);
 } 