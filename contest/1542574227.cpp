#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int h,m,s; double t1,t2; int bo[5];

int main(){
	scanf("%d%d%d%lf%lf",&h,&m,&s,&t1,&t2);
	double ph=h+m/60.0+s/3600.0;
	double pm=m/5.0+s/300.0;
	double ps=s/5.0;
	if(ph>=12.0) ph-=12.0;
	if(pm>=12.0) pm-=12.0;
	if(ps>=12.0) ps-=12.0;
	if(t1>=12.0) t1-=12.0;
	if(t2>=12.0) t2-=12.0;
	if(t1>t2) swap(t1,t2);
	if(ph>t1 && ph<t2) bo[1]=1;
	if(pm>t1 && pm<t2) bo[2]=1;
	if(ps>t1 && ps<t2) bo[3]=1;
	if(bo[1]==bo[2] && bo[2]==bo[3]) puts("YES");
	else puts("NO");
}