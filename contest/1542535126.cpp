#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	char s[5];
	char a[105][5];
	int n;
	while(~scanf("%s",s))
	{
		scanf("%d",&n);
		bool flag=false;
		for(int i=0;i<n;i++)
		{
			scanf("%s",a[i]);
			if(strcmp(s,a[i])==0)flag=true;
		}
		if(flag)
		{
			printf("YES\n");
			continue;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][1]==s[0]&&a[j][0]==s[1])
				{
					flag=true;
					break;
				}
			}
		}
		if(flag)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}