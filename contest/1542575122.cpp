#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{int t,flag1=0,flag2=0;
	char s[5];
	char s1[5];
	scanf("%s",s1);
	char a1=s1[0],b1=s1[1];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%s",s);
		{
			if(a1==s[0]&&b1==s[1])
			{
				flag1=1;
				flag2=1;
			}
			if(a1==s[1])
			flag1=1;
			if(b1==s[0])
			flag2=1;
		}
	}
	
	if(flag1&&flag2)
	printf("YES\n");
	else
	printf("NO\n");	
}