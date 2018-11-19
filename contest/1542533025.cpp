#include<iostream>
#include<string.h>
#include<queue>
#include<vector>
#include<cmath>
#include<cstdio>
#include<algorithm>
#define ll long long
#define N 210 
using namespace std;

string s[N];
int n,m,ans[210];
int solve(int n)
{
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			string tem="";
			for(int k=0;k<i;k++)
			{
				if((j&(1<<k))) tem+="1";
				else tem+="0";
			}
//			if(i==3) cout<<tem<<endl;
			if(s[n].find(tem)==-1) return i-1;
		}
	}
}
int main()
{
	scanf("%d",&n);
	memset(ans,0,sizeof(ans));
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		s[n+i]=s[a]+s[b];
		if(s[i+n].length() > 2000) s[i+n] = s[i+n].substr(0, 1000)+s[i+n].substr(s[i+n].length()-1000, 1000);
		ans[n+i]=max(max(ans[a],ans[b]),solve(n+i));
		cout<<ans[n+i]<<endl;
	}
}