#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j, s=0, maxsofar, maxend;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &j);
		if(j==1)
		{
			s++;
			a[i]=-1;
		}
		else
		{
			a[i]=1;
		}
	}
	if(s==n)
	{
		printf("%d\n", n-1);
		return 0;
	}
	//kadane's algo for o(n)
	maxsofar=0;
	maxend=0;
	for(i=0; i<n; i++)
	{
		maxend+=a[i];
		if(maxend<0)
		{
			maxend=0;
		}
		if(maxsofar<maxend)
		{
			maxsofar=maxend;
		}
	}
	printf("%d\n", s+maxsofar);
	return 0;
}