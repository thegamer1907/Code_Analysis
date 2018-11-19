#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

double hh,mm,ss;
double s,m,h,t1,t2;
bool flag=false;

bool J(double x,double l,double r){
	if (x>=l&&x<=r) return true;
	else return false;
}

int main(){
//	freopen("b.in","r",stdin);
	scanf("%lf%lf%lf%lf%lf",&hh,&mm,&ss,&t1,&t2);
	if (t1>t2) swap(t1,t2);
	m=mm/5+ss/300,s=ss/5,h=hh+m/60;
	if (h>12) h-=12;if (m>12) m-=12;
//	printf("%.2lf %.2lf %.2lf\n",h,m,s);
	if (!J(h,t1,t2)&&!J(m,t1,t2)&&!J(s,t1,t2)) flag=true;
	else if ((!J(h,0,t1)&&!J(m,0,t1)&&!J(s,0,t1))&&(!J(h,t2,12)&&!J(m,t2,12)&&!J(s,t2,12))) flag=true;
	if (!flag) printf("NO\n");
	else printf("YES\n");
	return 0;
}
