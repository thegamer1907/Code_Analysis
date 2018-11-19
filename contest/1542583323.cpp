#include <bits/stdc++.h>
using namespace std;
int i,j,k,n,x,y,t,a,b,c,t1,t2;
double h,m,s;
bool check1(){if (s<t2&&s>t1)return 0;if (m<t2&&m>t1)return 0;if (h<t2&&h>t1)return 0;return 1;}
bool check2(){
	if (s<t1)s+=12;
	if (m<t1)m+=12;
	if (h<t1)h+=12;t1+=12;swap(t1,t2);
	return check1();
}
int main(){
	scanf("%d%d%d%d%d",&a,&b,&c,&t1,&t2);
	if (t1>t2)swap(t1,t2);
	s=c;m=b+(double)c/60;h=a+m/60;m=m/5;s=s/5;if (h>12-(1e-7))h-=12;
	if (check1()||check2()){printf("YES\n");return 0;}
	printf("NO\n");
	return 0;
}
