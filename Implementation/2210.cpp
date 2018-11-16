#include <bits/stdc++.h>
int main()
{
	long long k,n,w;
	scanf("%I64d%I64d%I64d",&k,&n,&w);
	long long sum=w*k+w*(w-1)*k/2;
	if (sum<=n)
	printf("0\n");
	else
	printf("%I64d\n",sum-n);
}
