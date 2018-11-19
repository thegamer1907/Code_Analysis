#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char s[5],b[5];
	int n;
	cin>>s>>n;
	int flag0=0,flag1=0;
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		if(s[0]==b[0]&&s[1]==b[1])
		{
			printf("YES");
			return 0;
		}
		if(b[0]==s[1])
		flag0=1;
		if(b[1]==s[0])
		flag1=1;
	}
	if(flag0&&flag1)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
	
}
