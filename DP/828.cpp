#include <bits/stdc++.h>
using namespace std;
int i,j,n,m,k,s,mx;
int a[1000];
int main()
{
	mx=0;
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	scanf("%d",&a[i]);
	//b[1]=a[1];
	for (i=1; i<=n; i++)
	for (j=i; j<=n; j++)
	{
	s=0;
	for (k=1; k<=n; k++)
	if (k>=i && k<=j)
	{ 
	if (a[k]==0) s++;
    }
	else s=s+a[k];
	if (s>mx) mx=s;
    }
    printf("%d",mx);
	return 0;
}
