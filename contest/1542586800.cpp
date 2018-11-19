#include<bits/stdc++.h>
using namespace std;
int n,le,ri,h,m,s,t1,t2,che;
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h*=5;t1*=5;t2*=5;
	if(t1>t2)swap(t1,t2);
	if(h<t1||h>=t2)
	{
		if(m>=t1&&m<t2)
		{
			puts("NO");
			return 0;
		}
		if(s>t1&&s<t2)
		{
			puts("NO");
			return 0;
		}
	}
	else
	{
		if(m<t1||m>=t2)
		{
			puts("NO");
			return 0;
		}
		if(s<t1||s>t2)
		{
			puts("NO");
			return 0;
		}
	}
	puts("YES");
}