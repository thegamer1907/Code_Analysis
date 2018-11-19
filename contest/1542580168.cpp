#include<bits/stdc++.h>
using namespace std;

int h,m,s,t1,t2;

int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12;
	int a1=h*3600+m*60+s,a2=m*720+s*12,a3=s*720,a4=t1*3600,a5=t2*3600;
//	printf("%d %d %d %d %d\n",a1,a2,a3,a4,a5);
	if(a1>=a2)
	swap(a1,a2);
	if(a3<=a1)
	{
		int t=a1;a1=a3;a3=a2;a2=t;
	}
	if(a3>=a1&&a3<=a2)
	swap(a3,a2);
	if((a4>a1&&a4<a2&&a5>a1&&a5<a2)||(a4>a2&&a4<a3&&a5>a2&&a5<a3)||((a4<a1||a4>a3)&&(a5<a1||a5>a3)))
	puts("YES");
	else
	puts("NO");
}
