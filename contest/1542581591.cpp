#include<cstdio>
#include<algorithm> 
#include<cstring>
#define LL long long
using namespace std;
int n,k,a,b,mx; 
bool f[20];
int read()
{
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
	return x*f;
}
int main()
{
	n=read();k=read();mx=(1<<k)-1;
	for(int i=1;i<=n;i++)
	{
		a=0;
		for(int j=1;j<=k;j++)
			b=read(),a=a*2+b;
		f[a]=true;
	}
	if(f[0]){printf("YES");return 0;}
	for(int i=1;i<=mx;i++)
	{
		if(!f[i])continue;
		int x=mx-i;
		for(int j=x;j;j=(j-1)&x)
			if(f[j]){printf("YES");return 0;}
	}
	printf("NO");
	return 0;
}
