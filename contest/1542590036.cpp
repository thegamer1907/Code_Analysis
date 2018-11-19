#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int h,m,s,t1,t2;
int a;
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h=h*3600+m*60+s;
	m=m*720+s*12;
	s=s*720;
	t1=t1*3600;t2=t2*3600;
	h%=43200;
	m%=43200;
	s%=43200;
	t1%=43200;
	t2%=43200;
	for(int i=t1;;i=(i+1)%43200)
	{
		if(i==h||i==m||i==s) break;
		if(i==t2)
		{
			a=1;
			break;
		}
	}
	for(int i=t1;;i--)
	{
		if(i<0) i+=43200;
		if(i==h||i==m||i==s) break;
		if(i==t2)
		{
			a=1;
			break;
		}
	}
	if(a)
	puts("YES");
	else
	puts("NO");
//	printf("%d %d %d %d %d",h,m,s,t1,t2);
}
