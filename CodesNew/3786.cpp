#include <bits/stdc++.h>
#define N 300005

using namespace std;
typedef long long ll;

inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(!isdigit(ch)) {if(ch=='-') f=-1;ch=getchar();}
	while(isdigit(ch)) {x=(x<<1)+(x<<3)+ch-'0';ch=getchar();}
	return x*f;
}

int n,m;
int a[105];

int main()
{
	n=read();m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	sort(a+1,a+1+n);
	int sum=0;
	for(int i=1;i<n;i++) sum+=a[i];
	int nn=a[n]*(n-1)-sum;
	if(nn>=m)
		printf("%d ",a[n]);
	else
	{
		nn=m-nn;
		if(nn%n==0) nn=a[n]+nn/n;
		else nn=a[n]+nn/n+1;
		printf("%d ",nn); 
	}
	printf("%d\n",a[n]+m);
	return 0;
}