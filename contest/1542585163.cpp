#include<map>
#include<cmath>
#include<queue>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define inf 1000000007
#define ll long long
#define N 100010
int h,m,s,t1,t2;
double d[10];
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	h%=12;t1%=12;t2%=12;
	d[1]=h*360.0/12;
	d[2]=m*360.0/60;
	d[3]=s*360.0/60;
	d[2]+=s*6.0/60;
	d[1]+=m*1.0/2+s*1.0/120;
	d[4]=t1*360.0/12;
	d[5]=t2*360.0/12;
	int i;
	if(d[4]>d[5]) swap(d[4],d[5]);
	for(i=1;i<=3;i++)
	{
		if(d[i]>d[4]&&d[i]<d[5]) break;
	}
	if(i>3)
	{
		puts("YES");
		return 0;
	}
	for(i=1;i<=3;i++)
	{
		if(d[i]>d[5]||d[i]<d[4]) break;
	}
	if(i>3)
	{
		puts("YES");
		return 0;
	}
	puts("NO");
	return 0;
}