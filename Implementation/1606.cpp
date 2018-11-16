#include<stdio.h>
#include<string.h>
int main()
{
	char a[101];
	int l;
	scanf("%s",a);
	l=strlen(a);
//	printf("%d",l);
	int i=0,j=0,k=0,J=0,K=0;
	while(i<l)
	{
		if(a[i]=='0')
		{
			j++;
			k=0;
			if(j==7)
			{
				J=1;
				//printf("YES");
				break;
			}
		}
		else if(a[i]=='1')
		{
			k++;
			j=0;
			if(k==7)
			{
				J=1;
				//printf("YES");
				break;
			}
		}
		
	i++;
	}
	if(J==1)
		printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
