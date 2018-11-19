#include <cstdio>
#include <algorithm>
using namespace std;

double h,m,s,t1,t2;
double a[3];

int main()
{
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	m=m+s/60.;
	if (h==12.) h=0.;
	h=h*5.+m/60.;t1=t1*5.;t2=t2*5.;
	
	a[0]=h;a[1]=m;a[2]=s;
	sort(a,a+3);
	for(int i=0;i<=1;i++)
	{
		if (a[i]<=t1 && t1<=a[i+1] && a[i]<=t2 && t2<=a[i+1]) 
		{
			printf("YES\n");
			return 0;
		}
	}
	
	if ((a[2]<=t1 || t1<=a[0]) && (a[2]<=t2 || t2<=a[0]))
	{
		printf("YES\n");
		return 0;
	}
	
	printf("NO\n");
	return 0;
}