#include<bits/stdc++.h>
using namespace std;
long long n,a[500001],b[250001],c[250001];
int main()
{
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	  scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	for(int i=1;i<=n/2;i++)
	  b[i]=a[i];
	for(int i=n/2+1;i<=n;i++)
	  c[i-n/2]=a[i];
	long long aa=1,bb=1,sum=n;
	while(aa<=n/2&&n/2+bb<=n)
	  if(2*b[aa]<=c[bb])
	    {
	  	  aa++;
	  	  bb++;
	  	  sum--;
		}
	  else
	    bb++;
	printf("%lld",sum);
	return 0;
}