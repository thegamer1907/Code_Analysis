#include<cstdio>
using namespace std;
int jia(int a)
{
	a++;
	if(a==43200) a=0;
	return a;
}
int jian(int a)
{
	a--;
	if(a==-1) a=43200-1;
	return a;
}
int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a==12) a=0; else a*=3600;
	if(d==12) d=0; else d*=3600;
	if(e==12) e=0; else e*=3600;
	a+=c;
	a+=b*60;
	b=b*43200/60+c*12;
	c=c*43200/60;
	int cache=d;
	bool pd=0;
	while(cache!=e) 
	{
		int i=jian(cache);
		if(i!=a&&i!=b&&i!=c) cache=i;
		else break;
	}
	if(cache==e) pd=1;
	cache=d;
	while(cache!=e)
	{
		int i=jia(cache);
		if(i!=a&&i!=b&&i!=c) cache=i;
		else break;
	}
	if(cache==e) pd=1;
	cache=d;
	if(pd==1) printf("YES"); else printf("NO");
	return 0;
}