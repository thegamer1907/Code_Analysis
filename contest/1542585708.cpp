#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int h,m,s,t1,t2;
bool s1=1,s2=1;
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1>t2)swap(t1,t2);
	float hh=(float)h,mm=(float)m/5,ss=(float)s/5,tt1=(float)t1,tt2=(float)t2;
	if(m!=0||s!=0)hh+=0.05;
	if(s!=0)mm+=0.05;
	if(h>12)h-=12;
	if(m>12)m-=12;
	if(s>12)s-=12; 
	if(hh<tt1||hh>tt2)s1=0;
	if(hh>tt1&&hh<tt2)s2=0;
	if(mm<tt1||mm>tt2)s1=0;
	if(mm>tt1&&mm<tt2)s2=0;	
	if(ss<tt1||ss>tt2)s1=0;
	if(ss>tt1&&ss<tt2)s2=0;
	if(s1||s2)printf("YES\n");
	else printf("NO\n");
	return 0;
}