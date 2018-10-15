#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int a[500005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	int kk=1;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=a[kk]*2)
		{
			++kk;
		}
	}
	--kk;
	kk=min(n/2,kk);
	printf("%d\n",n-kk);
	return 0;
}