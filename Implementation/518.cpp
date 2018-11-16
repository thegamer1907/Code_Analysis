#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, i, t=0;
	cin >>n >>k;
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		cin >>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==0) break;
		else if(a[i]>=a[k]) t++;
	}
	cout <<t;
	return 0;
}