/* ***********************************************
Author        :axp
Created Time  :2017/10/5 15:39:32
TASK		  :C.cpp
LANG          :C++
************************************************ */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef long long ll;
const int inf = 1<<30;
const int md = 1e9+7;
int n,k;
int T;
int a[16];
int now[4];

bool dfs(bool b,int l,int r)
{
	if(r==4)l=l+1,r=l+1;
	if(l==4)
	{
		if(!b)return 0;
		for(int i=0;i<4;i++)if(now[i]<0)return 0;
		return 1;
	}
	if(dfs(b,l,r+1))return 1;
	for(int i=1;i<=a[(1<<l)|(1<<r)];i++)
	{
		for(int j=0;j<4;j++)
			if(j==l || j==r)
				now[j]--;
			else
				now[j]++;
		if(dfs(1,l,r+1))return 1;
	}
	for(int i=1;i<=a[(1<<l)|(1<<r)];i++)
	{
		for(int j=0;j<4;j++)
			if(j==l || j==r)
				now[j]++;
			else
				now[j]--;
	}
	return 0;
}

bool solve()
{
	if(a[0])return 1;
	for(int i=0;i<k;i++)
	{
		bool flag=1;
		for(int j=0;j<16;j++)
			if((j&(1<<i))==0 && a[j])
				flag=0;
		if(flag)return 0;
		if(a[1<<i])return 1;
	}
	if(k<=3)return 0;
	for(int i=0;i<4;i++)
		for(int j=i+1;j<4;j++)
		{
			int v=(1<<i)|(1<<j);
			if(a[v] && a[((1<<4)-1)^v])return 1;
		}
	return 0;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d%d",&n,&k);
	int x;
	for(int i=0;i<n;i++)
	{
		x=0;
		int v;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&v);
			x|=v<<j;
		}
		a[x]++;
	}
	bool ans=solve();
	puts(ans?"YES":"NO");
    return 0;
}
