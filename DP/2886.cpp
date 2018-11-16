#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],b[101];
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=k;i++)scanf("%d",&b[i]);
	sort(b+1,b+k+1);
	for(int i=1;i<=n;i++)
	  if(!a[i])a[i]=b[k--];
	for(int i=1;i<=n;i++)
	  if(a[i]<a[i-1])return printf("Yes\n"),0;
	return printf("No\n"),0;
}
