#include <cstdio>
#include <iostream>
#include <cmath>
#include <queue>
#include <algorithm>
#include <cstring>
#include <climits>
#define LL long long
#define MAXN 1000
using namespace std;

double a,b,c,t1,t2;

double s[10];
int cnt;


int main()
{
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&t1,&t2);

	a+=b/60.0+c/3600.0;
	b+=c/60.0;

	a=a*5;t1=t1*5;t2=t2*5;
	
	if(a>60) a-=60;
	if(b>60) b-=60;
	if(c>60) c-=60;
	
	if(t1==60) t1=0;
	if(t2==60) t2=0;
	if(a==60) a=0;
	s[1]=a;s[2]=b;s[3]=c;s[4]=t1;s[5]=t2;
	sort(s+1,s+5+1);
	
	cnt=unique(s+1,s+5+1)-s-1;

	if(s[1]==t1&&s[cnt]==t2||s[1]==t2&&s[cnt]==t1) {printf("YES\n");return 0;}
	for(int i=2;i<=cnt;i++)
		if(s[i]==t1&&s[i-1]==t2||s[i]==t2&&s[i-1]==t1)
		{printf("YES\n");return 0;}
	printf("NO\n");
  return 0;
}
/*
4 2 1 11 4


*/