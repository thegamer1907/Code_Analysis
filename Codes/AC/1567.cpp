#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#define N 100005

using namespace std;

long long a[N],dp[N];

int main()
{
	long long s,n;
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	long long left,right,mid;
	left=0;
	right=n;
	long long sum=0;
	while(left<right)
	{
		sum=0;
		mid=(left+right+1)>>1;
		for(int i=1;i<=n;i++) dp[i]=a[i]+i*mid;
		//for(int i=1;i<=n;i++) printf("%lld ",dp[i]);
		//printf("\n");
		sort(dp+1,dp+n+1);
		for(int i=1;i<=mid;i++) sum+=dp[i];
		if(sum>s) right=mid-1;
		else left=mid;
	}
	for(int i=1;i<=n;i++)
	{
		dp[i]=a[i]+i*left;
	}
	sum=0;
	sort(dp+1,dp+n+1);
	for(int i=1;i<=left;i++) sum+=dp[i];
	cout<<left<<" "<<sum<< endl;
	return 0;
}