#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<queue>
#include<vector>
#define inf 0x3f3f3f3f
#define ll long long
int ikr[2];
using namespace std;
int main()
{
	ikr[0]=ikr[1]=1;
	int h,m,s,st,en;
	scanf("%d%d%d%d%d",&h,&m,&s,&st,&en);
	if(st>en)
	{
		swap(st,en);
	}
	if(h>=st && h<en)
	{
		ikr[0]=0;
	}
	else
	{
		ikr[1]=0;
	}
	if(m>=5*st && m<5*en)
	{
		ikr[0]=0;
	}
	else
	{
		ikr[1]=0;
	}
	if(s>=5*st && s<5*en)
	{
		ikr[0]=0;
	}
	else
	{
		ikr[1]=0;
	}
	if(ikr[0] || ikr[1])
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}