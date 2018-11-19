#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<queue>
#include<cmath>
#include <string>
using namespace std;
const double pi=3.14159265359;
int h,m,s,t1,t2;
double ph,pm,ps,p1,p2; 
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	t1%=12,t2%=12;
	if(t1>t2) swap(t1,t2);
	ph+=(h%12)*pi/6;
	pm+=m*pi/30;ph+=m*pi/360;
	ps+=s*pi/30;pm+=s*pi/1800;ph+=s*pi/1800/360;
	p1=(t1%12)*pi/6;p2=(t2%12)*pi/6;
	if(ph>p1&&pm>p1&&ps>p1&&ph<p2&&pm<p2&&ps<p2)
	cout<<"YES\n";
	else if((ph<p1||ph>p2)&&(pm<p1||pm>p2)&&(ps<p1||ps>p2))
	cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
//
