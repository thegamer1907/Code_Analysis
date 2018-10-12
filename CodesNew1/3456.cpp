#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int a[110];
int n,m;

int main()
{
	int maxn=0,minn=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	int maxa=a[n];
	if(a[1]==maxa)
	{
		int t=m/n;
		if(n*t!=m) minn=maxa+t+1;
		else minn=maxa+t;
		maxn=maxa+m;
		printf("%d %d",minn,maxn);
		return 0;
	}
	maxn=maxa+m;
	for(int i=1;i<n;++i)
	{
		if(a[i]==maxa||m<=0) break;
		m=m-maxa+a[i],a[i]=maxa;
	}
	minn=maxa;
	if(m>0)
	{
		int t=m/n;
		if(n*t!=m) minn=maxa+t+1;
		else minn=maxa+t;
	}
	printf("%d %d",minn,maxn);
	return 0;
}