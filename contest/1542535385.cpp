#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

char s1[3],s[3];
int t1,t2,n,h[26],t[26],flag;

int main()
{
	gets(s1);
	t1=s1[0]-'a';
	t2=s1[1]-'a';
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++)
	{
		gets(s);
		if(s[0]==s1[0]&&s[1]==s1[1])
		{
			flag=1;
		}
		h[s[0]-'a']=1;
		t[s[1]-'a']=1;
	}
	if(flag||(h[t2]&&t[t1]))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
