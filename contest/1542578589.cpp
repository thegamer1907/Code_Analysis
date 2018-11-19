#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
double x,y,z;
int h,m,s,t1,t2,cnt=0;
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	z=(double)(s*6.0);
	y=(double)((m*60.0+s)/10.0);
	if (h==12) h=0;
	x=(double)((h*7200.0+m*60.0+s)/240.0);
	//printf("%.3f\n",x);
	//printf("%.3f\n",y);
	//printf("%.3f\n",z);
	t1*=30,t2*=30;
	if (t1>t2) swap(t1,t2);
	if ((t1<x)&&(t1<y)&&(t1<z)&&(x<t2)&&(y<t2)&&(z<t2))
	{
		printf("YES"); return 0;
	}
	if (((x<t1)||(x>t2)) && ((y<t1)||(y>t2)) && ((z<t1)||(z>t2)))
	{
		printf("YES"); return 0;
	}
	printf("NO");
}
