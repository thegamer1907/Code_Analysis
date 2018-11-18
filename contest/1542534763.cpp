#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
string s[205];
int ans[205];
int solve(string s1)
{
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			string tmp;
			for(int k=0;k<i;k++)
			{
				if(j&(1<<k))tmp+='1';
				else tmp+='0';
			}
			if(s1.find(tmp)==-1)return i-1;
		}
	}
}
int main()
{
	int n,m;
	while(~scanf("%d",&n))
	{
		memset(ans,0,sizeof(ans));
		for(int i=1;i<=n;i++)
		{
			cin>>s[i];
		}
		scanf("%d",&m);
		int a,b;
		for(int i=1;i<=m;i++)
		{
			scanf("%d%d",&a,&b);
			s[n+i]=s[a]+s[b];
			if(s[n+i].length()>2000)s[n+i]=s[n+i].substr(0,1000)+s[n+i].substr(s[n+i].length()-1000,1000);
			ans[n+i]=max(max(ans[a],ans[b]),solve(s[n+i]));
			printf("%d\n",ans[n+i]);
		}
	}
}
