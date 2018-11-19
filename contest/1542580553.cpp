#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=0x3f3f3f3f;
const int minn=-1;
int main(){
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	int temp;
	int count=0;
	if(t1>t2){
		temp=t1;t1=t2;t2=temp;
	}
	double a1,a2,a3,a4,a5;
	a1=h%12*30+0.5*m+(double)1/120*s;
	a2=6*m+0.1*s;
	a3=6*s;
	a4=t1%12*30;
	a5=t2%12*30;
	if(a4>a5){
		double tem;
		tem=a4;
		a4=a5;
		a5=tem;
	}
	if(a1>a4&&a1<a5)
		count++;
	if(a2>a4&&a2<a5)
		count++;
	if(a3>a4&&a3<a5)
		count++;
	if(count==3||count==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}