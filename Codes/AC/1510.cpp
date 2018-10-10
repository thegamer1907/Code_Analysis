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
	
	/*while(left<=right)
	{
		mid=(left+right)>>1;
		
		for(i=1;i<=n;i++) a[i].val=a[i].c+i*mid,b[i]=a[i].c+i*mid;
		
		sort(1+a,a+n+1);
		sort(b+1,b+n+1);
		
		long long sum=0;
		for(i=1;i<=mid;i++) sum+=b[i];
		if(sum<=s)
		{
			printf("%d %lld\n",mid,sum);
			left=mid+1;
			ans=mid;
		    fin=sum;
		}
		else right=mid-1;
	}*/
	long long l = 1,r = n;
    while(l <= r){
        long long m = (l + r) / 2;
    for(long long i = 1; i <= n; i++)
        b[i] = a[i].c + i * m;
    sort(b + 1,b + 1 + n);
    
    long long sum = 0;
    for(long long i = 1; i <= m; i++)
        sum += b[i];
    if( sum <= s){
    	l=m+1;
    	ans = m,fin = sum;
    }
    else r=m-1;
    }
	
	
	printf("%I64d %I64d\n",ans,fin);
	return 0;
}