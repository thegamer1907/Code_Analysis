#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

double h,m,s,t1,t2;

bool pd(double x,double l,double r)
{
	if(l<=x&&x<=r) return 1;
	return 0;
}

int main()
{
//	freopen("a.in","r",stdin);
	
	int i,j;
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	h*=5;t1*=5;t2*=5;m+=s/60;h+=m/12;
	if(m>60) m-=60;if(h>60) h-=60;
	if(t1>t2) swap(t1,t2);
	if((!pd(h,t1,t2)&&!pd(m,t1,t2)&&!pd(s,t1,t2))) cout<<"YES";
	else if(!pd(h,0,t1)&&!pd(h,t2,100)&&!pd(m,0,t1)&&!pd(m,t2,100)&&!pd(s,0,t1)&&!pd(s,t2,100)) cout<<"YES";
	else cout<<"NO";
	
	
	return 0;
}
