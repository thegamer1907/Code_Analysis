#include<bits/stdc++.h>

using namespace std;

const int maxn=100100;

int a[maxn];
int n,temp,ans;

int main()
{
	scanf("%d",&n);
	temp=2e9,ans=0;
	for (int i=1; i<=n; i++)
	{
		scanf("%d",&a[i]);
		a[i]=a[i]-i+1;
		int now=(a[i]+n-1)/n+1;
		if (now<temp) temp=now,ans=i;
	}
	printf("%d\n",ans);
	return 0;
}