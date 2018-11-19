#include <bits/stdc++.h>
#define gc getchar()
#define ll long long
using namespace std;
double a[3];
int read()
{
	int x=1;
	char ch;
	while (ch=gc,ch<'0'||ch>'9') if (ch=='-') x=-1;
	int s=ch-'0';
	while (ch=gc,ch>='0'&&ch<='9') s=s*10+ch-'0';
	return x*s;
}
int main()
{
	int h,m,s,t1,t2;
	h=read(),m=read(),s=read(),t1=read(),t2=read();
	a[0]=(double)(h%12)+(double)m/60.0+(double)s/3600.0;
	a[1]=(double)m/5.0+(double)s/300.0;
	a[2]=(double)s/5.0;
	sort(a,a+3);
	if (t1>a[0]&&t1<a[1])
	{
		if (t2>a[0]&&t2<a[1]) puts("YES");
		else puts("NO");
	}
	if (t1>a[1]&&t1<a[2])
	{
		if (t2>a[1]&&t2<a[2]) puts("YES");
		else puts("NO");
	}
	if (t1<a[0]||t1>a[2])
	{
		if (t2<a[0]||t2>a[2]) puts("YES");
		else puts("NO");
	}
	return 0;
}
