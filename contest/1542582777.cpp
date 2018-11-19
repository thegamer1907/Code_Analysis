#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#define LL long long
using namespace std; 


int h,m,s,t1,t2;
bool suc=true;
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);h%=12;
	double p1=360.0*h/12+30.0*(m*60+s)/3600;
	double p2=360.0*(m*60+s)/3600;
	double p3=360.0*(s)/60;
	double q1=(t1%12)*30;
	double q2=(t2%12)*30;
	if(q1>q2)swap(q1,q2);
	if(q1<p1&&p1<q2)suc=false;
	if(q1<p2&&p2<q2)suc=false;
	if(q1<p3&&p3<q2)suc=false;
	if(q1<p1&&p1<q2&&q1<p2&&p2<q2&&q1<p3&&p3<q2)suc=true;
	if(suc)printf("YES");
	else printf("NO");
}
/*
12 0 1 12 1
*/