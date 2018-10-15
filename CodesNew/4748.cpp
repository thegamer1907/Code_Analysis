#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int N=500005;

typedef long long LL;

int n,a[N],ans;

char c;

int read()
{
	int x=0,sig=1;
	for (c=getchar();c<'0' || c>'9';c=getchar()) if (c=='-') sig=-1;
	for (;c>='0' && c<='9';c=getchar()) x=x*10+c-48;
	return x*sig;
}

int main()
{
	n=read();
	for (int i=1;i<=n;i++) a[i]=read();
	sort(a+1,a+n+1);
	int m=n/2+1;
	for (int i=1,j=m;i<m;i++)
	{
		for (;j<=n && a[i]*2>a[j];j++);
		if (j<=n) ans++,j++;
	}
	printf("%d\n",n-ans);
	return 0;
}