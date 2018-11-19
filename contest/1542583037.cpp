#include<iostream>
#include<cstdio>
#include<algorithm>
#define zj(__) (__>t1 && __<t2)
#define zw(__) (__<t1 || __>t2)
using namespace std;
double s[5];
int h,m,ss,t1,t2,x;
bool cmp(double i, double j) {
	return i<j;
}
int main(){
	scanf("%d%d%d%d%d",&h,&m,&ss,&t1,&t2);
	s[1]=(h+1.0*m/(1.0*60)+1.0*ss/(1.0*3600))>12?(h+1.0*m/(1.0*60)+1.0*ss/(1.0*3600))-12*1.0:(h+1.0*m/(1.0*60)+1.0*ss/(1.0*3600));
	s[2]=((m+1.0*ss/(1.0*60))>60)?((m+1.0*ss/(1.0*60))-60*1.0)*1.0/5*1.0:(m+1.0*ss/(1.0*60))/5*1.0;
	s[3]=ss*1.0/5*1.0;
//	sort(s+1,s+4,cmp);
	if (t1>t2) {x=t2; t2=t1; t1=x;}
	if ((zj(s[1]) || zj(s[2]) || zj(s[3])) && (zw(s[1])|| zw(s[2]) || zw(s[3]))) printf("NO"); else printf("YES");
}
