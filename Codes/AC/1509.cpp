#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#define N 100005

using namespace std;

struct node
{
	long long c;
	long long val;
	bool operator < (const node &a) const {
		return val < a.val;
	}
	
}a[N];

long long b[N];

long long n,s;

int main()
{
	int i,j;
	scanf("%lld %lld",&n,&s);
	
	for(i=1;i<=n;i++) scanf("%lld",&a[i].c);
	
	long long left,right,mid;
	left=1; right=n; 
	long long fin,ans;
	fin=ans=0;
	
	while(left<=right)
	{
		mid=(left+right)>>1;
		
		for(i=1;i<=n;i++) b[i]=a[i].c+i*mid;
		
		sort(b+1,b+n+1);
		
		long long sum=0;
		for(i=1;i<=mid;i++) sum+=b[i];
		
		if(sum<=s)
		{
			left=mid+1;
			ans=mid;
		    fin=sum;
		}
		else right=mid-1;
	}
	
	
	printf("%I64d %I64d\n",ans,fin);
	return 0;
}