#include<bits/stdc++.h>
using namespace std;

double h,m,s,t1,t2;
bool b1,b2;

int main()
{
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	h*=30; m*=6; s*=6; t1*=30; t2*=30;
	h+=0.1; m+=0.1;
	if(h>360) h-=360;
	if(m>360) m-=360;
	if((t1<h && t2>h) || (t1>h && t2<h)) b1=true;
	else b2=true;
	if((t1<m && t2>m) || (t1>m && t2<m)) b1=true;
	else b2=true;
	if((t1<s && t2>s) || (t1>s && t2<s)) b1=true;
	else b2=true;
	if(!b1 || !b2) printf("YES\n");
	else printf("NO\n");
	return 0;
}
