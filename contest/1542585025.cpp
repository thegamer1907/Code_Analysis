#include<stdio.h>
int a,b,c,s,t,i,f[233],t1,e,an;
int main()
{
	scanf("%d %d %d %d %d",&a,&b,&c,&s,&t);
	a%=12;
	b/=5;
	c/=5;
	for(i=1;i<=12;i++)
	{
		f[i]=f[i-1]+(i==a+1)+(i==b+1)+(i==c+1);
	}
	if(f[s]%3==f[t]%3)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
