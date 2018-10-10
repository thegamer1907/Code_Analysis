#include<stdio.h>
#include<string.h>
#include<queue>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	long long n,m,k;
	while(scanf("%I64d%I64d%I64d",&n,&m,&k)!=EOF)
	{
		long long l=1,r=m*n,mid,cnt;
		while(l<=r)
		{//cout<<r<<endl;
			cnt=0;
			mid=(l+r)/2;
			for(int i=1;i<=n;i++)
			{
				cnt+=min(m,(mid-1)/i);
			}
			if(cnt<=k-1) l=mid+1;
			else r=mid-1;
			
		}
		cout<<r<<endl;
	}
}
    				 		  					   			   	