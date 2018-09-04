#include <bits/stdc++.h>
using namespace std;

const int S = 1e7+5;
int c[S],a[S],p[S];

int main()
{
	int n,m,t,l,r,i;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d",&t);
		c[t]++;
	}
	for (i = 2; i < S; i++)
	{
		a[i] = a[i-1];
		if (p[i]) continue;
		a[i] += c[i];
		for (int j = i+i; j < S; j+=i)
		{
			p[j] = 1;
			a[i] += c[j];
		}
	}
	scanf("%d",&m);
	while (m--)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",a[min(r,S-1)]-a[min(l-1,S-1)]);
	}
}
