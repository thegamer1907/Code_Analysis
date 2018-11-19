#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<set>
#include<map>
using namespace std;
#define ll long long
#define REP(i,a,b) for(int i=(a),_end_=(b);i<=_end_;i++)
#define DREP(i,a,b) for(int i=(a),_end_=(b);i>=_end_;i--)
#define EREP(i,a) for(int i=start[(a)];i;i=e[i].next)
inline int read()
{
	int sum=0,p=1;char ch=getchar();
	while(!(('0'<=ch && ch<='9') || ch=='-'))ch=getchar();
	if(ch=='-')p=-1,ch=getchar();
	while('0'<=ch && ch<='9')sum=sum*10+ch-48,ch=getchar();
	return sum*p;
}

int h,m,s,t1,t2;

long double hh,mm,ss,t11,t22;

void init()
{
	h=read();h%=12;m=read();s=read();t1=read();t2=read();t1%=12;t2%=12;
	t11=t1*30;t22=t2*30;
	hh=h*30+m*0.5+s*0.5/60;
	mm=m*6+s*0.1;
	ss=s*6;
}

long double sss[5];

void doing()
{
	sss[1]=hh;sss[2]=mm;sss[3]=ss;
	sort(sss+1,sss+4);
	int flag1=1,flag2=1;
	if(t11<sss[1])flag1=1;
	else if( sss[1]<t11 && t11<sss[2])flag1=2;
	else if(sss[2]<t11 && t11<sss[3])flag1=3;
	else flag1=1;

	
	if(t22<sss[1])flag2=1;
	else if( sss[1]<t22 && t22<sss[2])flag2=2;
	else if(sss[2]<t22 && t22<sss[3])flag2=3;
	else flag2=1;
	if(flag1==flag2)printf("YES\n");
	else printf("NO\n");
}

int main()
{
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	init();
	doing();
	return 0;
}

