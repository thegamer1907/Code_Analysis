#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
queue<int> q;
int read()
{
	char ch=getchar();int f=0;
	while(ch<'0'||ch>'9')ch=getchar();
	while(ch>='0'&&ch<='9'){f=(f<<1)+(f<<3)+ch-'0';ch=getchar();}
	return f;
}
char s[5];
char t[100005][5];
int main()
{
	scanf("%s",s+1);
	int n=read();bool ac1=0,ac2=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",t[i]+1);
		if(s[1]==t[i][1]&&s[2]==t[i][2])
		{
			printf("YES");
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s[1]==t[i][2])
		ac1=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(s[2]==t[i][1])
		ac2=1;
	}
	if(ac1&&ac2)
	printf("YES");
	else printf("NO");
}
