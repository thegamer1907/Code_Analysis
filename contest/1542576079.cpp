#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
double a,b,c,d,t1,t2;
int get(double x)
{
	if (a<=x&&x<=b) return 0;
	if (b<=x&&x<=c) return 1;
	return 2;
}
int main()
{
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&t1,&t2);
	a=(a+(b+c/60.0)/60.0)*5.0;
	b=b+c/60.0;
	if (a>=b&&a>=c) swap(a,c);
	if (b>=a&&b>=c) swap(b,c);
	if (a>=b) swap(a,b);
	t1=t1*5.0;
	t2=t2*5.0;
	if (get(t1)==get(t2)) puts("YES");else puts("NO");
	return 0;
} 