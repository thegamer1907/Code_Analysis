#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2,p,q;
int a[4];
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	a[1]=h;a[2]=m/5;a[3]=s/5;
	sort(a+1,a+4);
	if(t1>a[1] && t1<=a[2])
		p=1;
	else
	if(t1>a[2] && t1<=a[3])
		p=2;
	else
		p=3;
	if(t2>a[1] && t2<=a[2])
		q=1;
	else
	if(t2>a[2] && t2<=a[3])
		q=2;
	else
		q=3;
	puts(p==q?"YES":"NO");
	return 0;
}
