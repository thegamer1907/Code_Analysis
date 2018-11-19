#include<bits/stdc++.h>
using namespace std;

double h,m,s,t1,t2;
double a[4];
int main()
{
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	if(t2==12) t2=0;
	if(t1==12) t1=0;
	t1=5*t1;
	t2=5*t2;
	m=m+(s/300.0);
	h=5*h;
	h=h+(m/12.0);
	if(h>=60) h=h-60;
	if(m>=60) m=m-60; 
	a[1]=h;
	a[2]=m;
	a[3]=s;
	sort(a+1,a+3+1);
	int id1,id2;
	if(t1>=a[1] && t1<=a[2]) id1=1;
	else if(t1>=a[2] && t1<=a[3]) id1=2;
	else id1=3;
	if(t2>=a[1] && t2<=a[2]) id2=1;
	else if(t2>=a[2] && t2<=a[3]) id2=2;
	else id2=3;
	if(id1==id2) printf("YES\n");
	else printf("NO\n");
	return 0;
}
