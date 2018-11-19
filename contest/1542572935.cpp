#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<queue>
#include<algorithm>
#include<stack>
#include<cstring>
#include<vector>
#include<list>
#include<bitset>
#include<set>
#include<map>
#include<time.h>
using namespace std;
typedef long long ll;
const int mod=1e6;
const int maxn=100000+10;
int main()
{
	int h,m,s,t1,t2;
	int flag1=0,flag2=0;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	int a=h,b=m,c=s;
	b/=5;c/=5;
	if(m||s)flag1=1;
	if(s||m%5)flag2=1;
	if(b==0)b=12;
	if(c==0)c=12;
	if(t1>t2)swap(t1,t2);
	int cnt=0;
	if(flag1)
	{
		if(t1<=a&&a<t2)
		cnt++;
	}
	else
	{
		if(t1<=a&&a<=t2)cnt++;
	}
	if(flag2)
	{
		if(t1<=b&&b<t2)cnt++;
	}
	else
	{
		if(t1<=b&&b<=t2)cnt++;
	}
	if(s%5)
	{
		if(t1<=c&&c<t2)cnt++;
	}
	else
	{
		if(t1<=c&&c<=t2)cnt++;
	}
	//printf("cnt=%d %d\n",cnt,b);
	if(cnt==0||cnt==3)printf("YES\n");
	else printf("NO\n");
	return 0;
}