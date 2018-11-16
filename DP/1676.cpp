#include<stdio.h>
#include<string.h>
int main()
{
	char str[100020]={'\0'},str1[100020]={'\0'};
	long long i,x,l,m,n;
	while(~scanf("%s",str))
	{
		getchar();
		m=0;n=0;
		l=strlen(str);
		strcpy(str1,str);
		for(i=0;i<l-1;i++)
		{
			if(str[i]=='A'&&str[i+1]=='B'&&n==0)
			{
				n++;str[i]=str[i+1]='M';i++;
			}	
		}
		for(i=0;i<l-1;i++)
		{
			if(str[i]=='B'&&str[i+1]=='A'&&m==0)
				{
					m++;i++;		
				}	
		}
		if(m==1&&n==1)
		{
			printf("YES\n");
			continue;
		}
			m=0;n=0;
			for(i=0;i<l-1;i++)
			{
				if(str1[i]=='B'&&str1[i+1]=='A'&&m==0)
				{
					m++;str[i]=str[i+1]='M';i++;
				}
			}
				for(i=0;i<l-1;i++)
		{
			if(str[i]=='A'&&str[i+1]=='B'&&n==0)
			{
				n++;i++;
			}	
		}
			if(m==1&&n==1)printf("YES\n");
			else printf("NO\n");
		
		memset(str,'\0',100020);
	}	
	return 0;
}