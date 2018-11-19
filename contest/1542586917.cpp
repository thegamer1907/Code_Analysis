#include <iostream>
#include <cstdio>
using namespace std;
int h,m,s,t1,t2,a,b,c;
double d1,d2,d3,x,y;
int get(double x)
{
	if (x>=d1 && x<=d2)	return 1;
	if (x>=d2 && x<=d3)	return 2;
	return 3;
}
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	a=s;
	b=m*60+s;
	c=s+m*60+h*3600;
	d1=(1.0*a/60)*360;
	d2=(1.0*b/3600)*360;
	d3=(1.0*c/43200)*360;
	if (d1>d2)	swap(d1,d2);
	if (d1>d3)	swap(d1,d3);
	if (d2>d3)	swap(d2,d3);
	x=(1.0*t1/12)*360;
	y=(1.0*t2/12)*360;
	if (get(x)==get(y))	puts("YES");
	else puts("NO");			
	return 0;
}