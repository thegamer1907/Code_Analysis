#include<cstdio>
#include<algorithm>
using namespace std;
int a[4];
double d[5],t1,t2;
bool cmp(double a,double b){return a<b;}
int main()
{
	for(int i=1;i<=3;++i)scanf("%d",&a[i]);
	scanf("%lf%lf",&t1,&t2);t1*=30.0;t2*=30.0;
	d[1]=(a[1]%12)*30.0+a[2]*1.0/2+a[3]*1.0/120.0;
	d[2]=a[2]*6.0+a[3]/10.0;d[3]=a[3]*6.0;
	sort(d+1,d+4,cmp);d[4]=d[1]+360.0;d[0]=d[3]-360.0;
	for (int i=0;i<=3;++i) {
		if (t1>d[i]&&t1<d[i+1]&&t2>d[i]&&t2<d[i+1]){printf("YES");return 0;}
	}
	if (t1>d[3]&&t1<d[4]&&t2>d[0]&&t2<d[1]){printf("YES");return 0;}
	else if (t2>d[3]&&t2<d[4]&&t1>d[0]&&t1<d[1]){printf("YES");return 0;}
	else puts("NO");
}