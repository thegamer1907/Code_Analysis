#include<bits/stdc++.h>
using namespace std;
long long int func(long long int a[],long long int n,long long int k)
{
	long long int i,j=0;
	long long int min=0;
	long long int b[n];
	for(i=0; i<n; i++)
		b[i]=a[i];
	for(i=0; i<n; i++)
	{
		b[i]=b[i]+(i+1)*k;
	}
	sort(b,b+n);
	for(i=0; i<k; i++)
		min=min+b[i];
	//printf("%d**",min);
	return min;
}
int main()
{
	long long int n,s;
	scanf("%lld%lld",&n,&s);
	long long int a[n];
	long long int j;
	for(j=0; j<n; j++)
		scanf("%lld",&a[j]);
	long long int high=n;
	long long int low=0;
	long long int mid;
	long long int ans=0;
	long long int ans2=0;
	long long int tz;
	while(high>=low)
	{
		
		mid=low+(high-low)/2;
	//	printf("-------------%lld----------\n",mid);
		tz=func(a,n,mid);
	//	printf("%d %d\n",low,high);
	//	printf("%d\n",mid);
	//	printf("%lld\n",tz);
		if(tz<=s)
		{
			ans=mid;
			low=mid+1;
			ans2=tz;
		}
		else
		{
			high=mid-1;
		}
	//	printf("%d %lld\n",low,high);
	//	printf("%d %lld\n",ans,ans2);
	}
	ans2=func(a,n,ans);
	printf("%lld %lld",ans,ans2);
	return 0;
}
