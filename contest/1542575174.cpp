#include<cstdio>
#include<algorithm>
using namespace std;

int hh,m,s,t1,t2,p1,p2;
double h[4];

int main()
{
	scanf("%d%d%d%d%d",&hh,&m,&s,&t1,&t2);
	h[3]=s/60.0*12;
	h[2]=m/60.0*12+s/60.0/60*12;
	h[1]=hh+h[2]/12;
	sort(h+1,h+4);
	if(t1>h[1]&&t1<h[2])
		p1=1;
	else if(t1>h[2]&&t1<h[3])
		p1=2;
	else
		p1=3;
	if(t2>h[1]&&t2<h[2])
		p2=1;
	else if(t2>h[2]&&t2<h[3])
		p2=2;
	else
		p2=3;
	if(p1==p2)
		printf("YES");
	else
		printf("NO");
	return 0;
}
