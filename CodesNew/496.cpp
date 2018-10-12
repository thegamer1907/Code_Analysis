#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(int m,int sum[],int n,int t)
{
    for(int i=0;i<=(n-m);i++)
    {
       if((sum[i+m]-sum[i])<=t)
       return true;
    }
    return false;
}
int main()
{
	int n;int t;
	scanf("%d %d",&n,&t);
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int sum[n+1];
	sum[0]=0;
	int s=0;
	for(int i=0;i<n;i++)
	{
	    s+=a[i];
	    sum[i+1]=s;
	}
	
	int l=0,h=n,mid=0,ans=0;
	while(l<=h)
	{
	    mid=(l+h)>>1;
	    if(check(mid,sum,n,t))
	    {
	        l=mid+1;
	        ans=l-1;
	    }
	    else
	    {
	        h=mid-1;
	    }
	}
	printf("%d\n",ans);
	    
}