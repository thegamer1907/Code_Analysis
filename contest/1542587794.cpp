#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
const double eps=1e-6;
int main()
{
	int h,m,s,t1,t2,a1,a2;
	double c[3],c1,c2;
	while(scanf("%d %d %d",&h,&m,&s)!=EOF)
	{
		scanf("%d %d",&t1,&t2);
		c[0]=360.0*s/60;
		c[1]=360.0*m/60 + c[0]/60.0;
		c[2]=360.0*(h%12)/12 + c[1]/120.0;
		sort(&c[0],&c[3]);
		c1=360.0*(t1%12)/12;
		c2=360.0*(t2%12)/12;
		if(c1>c[0]-eps&&c1<c[1]+eps) a1=1;
		else if(c1>c[1]-eps&&c1<c[2]+eps) a1=2;
		else a1=0;
		if(c2>c[0]-eps&&c2<c[1]+eps) a2=1;
		else if(c2>c[1]-eps&&c2<c[2]+eps) a2=2;
		else a2=0;
		printf("%s\n",a1==a2? "YES":"NO");
	}
	return 0;
}