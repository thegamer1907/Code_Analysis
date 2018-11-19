#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int a,b;
int main ()
{
	char s[5];
	scanf("%s",s);
	char cha;
	cha=s[0];
	char chb;
	chb=s[1];
	int n;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s);
		if(s[0]==cha&&s[1]==chb)
		{
			printf("YEs");
			return 0;
		}
		if(s[1]==cha)
		{
			a=1;
		}
		if(s[0]==chb)
		{
			b=1;
		}
	}
	if(a==1&&b==1)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}