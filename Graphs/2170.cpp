#include<stdio.h>
#include<cstring>
#include<algorithm>
#define reg register
#define fast static
using namespace std;
typedef long long ll;
ll read()
{
	reg ll x=0,f=1;
	char ch=getchar();
	while(ch<'0' || ch>'9')
	{
		if(ch=='-')	f=-1;
		ch=getchar();
	}
	while(ch>='0' && ch<='9')
	{
		x=10*x+ch-'0';
		ch=getchar();
	}
	return x*f;
}
const int Size=200005;
fast int n,m;
void init()
{
	n=read();
	m=read();
}
int main()
{
	init();
	int cnt=0;
	while(n<m)
	{
		if(m&1)
		{
			m++;
		}
		else
		{
			m=m>>1;
		}
		cnt++;
	}
	cnt=cnt-m+n;
	printf("%d",cnt);
	return 0;
}