#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <set>
typedef long long ll;
#define maxn 100010
#define mod 1000000007
using namespace std;
int n;
char s[5],a[5];
int main ()
{
	int i,j,flag=0,f1=0,f2=0;
	scanf("%s",s);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		if(a[0]==s[0]&&a[1]==s[1]||a[0]==s[1]&&a[1]==s[0])
		{
			flag=1;
			continue;
		}
		if(a[1]==s[0])
		{
			f1=1;
		}
		if(a[0]==s[1])
		{
			f2=1;
		}
		if(f1==1&&f2==1)
		{
			flag=1;
		}
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}