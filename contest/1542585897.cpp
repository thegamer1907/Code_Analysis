#include <cstdio>
#define days 43200
using namespace std;

int a,b,c;
int s,t;
int x,y;

int main()
{
	scanf("%d %d %d %d %d",&a,&b,&c,&s,&t);
	s=s*3600%days,t=t*3600%days;
	x=y=s;
	a=a*3600+b*60+c;
	b=720*b+12*c;
	c=720*c;
	a%=days;
	b%=days;
	c%=days;
	while(x!=-1 || y!=-1)
	{
		if(x!=-1)
		{
			x++;
			x%=days;
		}
		if(y!=-1)
		{
			y--;
			y=(y+days)%days;
		}
		if(x==a || x==b || x==c) x=-1;
		if(y==a || y==b || y==c) y=-1;
		if(x==t || y==t)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}

