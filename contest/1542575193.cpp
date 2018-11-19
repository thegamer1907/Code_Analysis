#include <bits/stdc++.h>
using namespace std;

int h,m,s,t1,t2;
double a[3];

int pos(int t)
{
	if (t<a[0])  return 0;
	if (t<a[1])  return 1;
	if (t<a[2])  return 2;
	return 0;
}

void work()
{
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	a[0]=s/5.0,a[1]=(m+s/60.0)/5.0,a[2]=h+(m+s/60.0)/60;
	sort(a,a+3);
	puts(pos(t1)==pos(t2)?"YES":"NO");
}

int main()
{
	work();
	return 0;
}
