#include<bits/stdc++.h>
using namespace std;
int x,y,z,T1,T2;
double a[4],t1,t2;
int main(){
	scanf("%d%d%d%d%d",&x,&y,&z,&T1,&T2);
	x%=12;
	T1%=12;
	T2%=12;
	y%=60;
	z%=60;
	a[1]=1.0*x/12;
	a[2]=1.0*y/60;
	a[3]=1.0*z/60;
	a[2]+=a[3]/60;
	a[1]+=a[2]/60;
	t1=1.0*T1/12;
	t2=1.0*T2/12;
	sort(a+1,a+4);
	//for (int i=1;i<=3;i++) printf("%.3lf ",a[i]);
//	printf("%.3lf %.3lf\n",t1,t2);
	for (int i=1;i<=2;i++) if (((a[i]<=t1&&a[i+1]>=t1)||(a[i]<=t1+1.0&&a[i+1]>=t1+1.0))&&((a[i]<=t2&&a[i+1]>=t2)||(a[i]<=t2+1.0&&a[i+1]>=t2+1.0))) {
		printf("YES\n");
		return 0;
	}
	a[1]+=1.0;
	if (((a[3]<=t1&&a[1]>=t1)||(a[3]<=t1+1.0&&a[1]>=t1+1.0))&&((a[3]<=t2&&a[1]>=t2)||(a[3]<=t2+1.0&&a[1]>=t2+1.0))) {
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
}
