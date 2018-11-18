#include<cstdio> 
#include<cstring>
#include<cmath>
#include<algorithm>
#define MAX 2000
typedef long long ll;
using namespace std;
double a[5];
int main()
{
	double m,s;
	int t1,t2,h;
	scanf("%d%lf%lf%d%d",&h,&m,&s,&t1,&t2);
	t1%=12;t2%=12;h%=12;
	double tmp=h,tmp1=t1,tmp2=t2;
	a[0]=6*s;
	a[1]=6*m+s/10;
	a[2]=tmp*30+(m+s/60)/2;
	sort(a,a+3);
	tmp1*=30;tmp2*=30;
	int ans1=-1,ans2=-1;
	for(int i=0;i<2;i++)
	{
		if(tmp1>=a[i]&&tmp1<=a[i+1])
			ans1=i;
		if(tmp2>=a[i]&&tmp2<=a[i+1])
			ans2=i;
	}
	if(ans1==-1) ans1=4;
	if(ans2==-1) ans2=4;
	if(ans1==ans2) printf("YES\n");
	else printf("NO\n");
	return 0;
}