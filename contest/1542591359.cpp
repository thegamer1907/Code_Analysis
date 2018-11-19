#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
char a[3];
int n;
bool s1=0,s2=0;
int main()
{
	cin>>a;
	char u=a[0],v=a[1];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a[0]==u&&a[1]==v)
		{
			printf("YES\n");return 0;
		}
		if(a[1]==u)s1=1;
		if(a[0]==v)s2=1;
	}
	if(s1&&s2)printf("YES\n");else printf("NO\n");
	return 0;
} 