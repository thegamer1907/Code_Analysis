#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<map>
#define maxn 101000
int main()
{
	long long n,m,k,a[maxn];
	scanf("%lld%lld%lld",&n,&m,&k);
	for(long long i=0;i<m;i++)
		scanf("%lld",&a[i]);
	

	long long ans=0,out=0,all=k;
	while(out<m)
	{
		
		while(out<m&&a[out]<=out+all)
		{
			long long sign=0;
			while(out+sign<m&&a[out+sign]<=out+all)
				sign++;
			if(sign>0)
			{
				out+=sign;
				sign=0;
				ans++;
				//printf("%lld\n",out);
			}
			else
				break;
		}
		all+=k;
	}
	printf("%lld\n",ans);
}