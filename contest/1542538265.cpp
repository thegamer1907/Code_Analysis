#include<stdio.h>
int h,m,s,t1,t2; 
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	(h*=5)%=60;(t1*=5)%=60;(t2*=5)%=60;t1>t2?t1^=t2^=t1^=t2:1;
	puts(((t1<=h&&h<t2)+(t1<=m&&m<t2)+(t1<=s&&s<t2))%3==0?"YES":"NO");return 0;
}