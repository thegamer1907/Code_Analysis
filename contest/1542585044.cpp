#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a,b,n;
char ch1[22],ch2[22];
int main()
{
	scanf("%s",ch1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",ch2);
		if(ch2[0]==ch1[1]) b=1;
		if(ch2[1]==ch1[0]) a=1;
		if(ch1[0]==ch2[0]&&ch1[1]==ch2[1]) a=b=1;
	}
	if(a&&b)
	puts("YES");
	else
	puts("NO");
}
