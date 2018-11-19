/*
 Author: LargeDumpling
 Email: LargeDumpling@qq.com
 Edit History:
	2017-10-05	File created.
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int n,k;
int num[16];
bool check(int S)
{
	int tem[4]={0,0,0,0};
	for(int i=0;i<16;i++) if(S&(1<<i))
	{
		for(int j=0;j<4;j++)
			if(i&(1<<j)) tem[j]++;
			else tem[j]--;
	}
	if(tem[0]<=0&&tem[1]<=0&&tem[2]<=0&&tem[3]<=0)
		return true;
	return false;
}
int main()
{
	bool flag=false,flag2;
	int limit,limit2;
	scanf("%d%d",&n,&k);
	limit=1<<k;
	limit2=1<<limit;
	for(int i=1;i<=n;i++)
	{
		int tem=0,x;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&x);
			if(x) tem+=(1<<j);
		}
		num[tem]++;
	}
	for(int i=1;i<limit2;i++)
		if(check(i))
	{
		flag2=true;
		for(int j=0;j<limit;j++) if(i&(1<<j))
			if(!num[j])
				flag2=false;
		flag|=flag2;
	}
	if(flag) puts("YES");
	else puts("NO");
	fclose(stdin);
	fclose(stdout);
	return 0;
}

