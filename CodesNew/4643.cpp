#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int a[500010];
int n;
bool judge(int x)
{
	if(x<(n+1)/2)//(n+1) 
		return false;
	for(int i=0;i<n-x;i++)
	{
		if(a[i+x]/a[i]<2)
		return false;
	}
	return true;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int l=1,r=n;
	int mid,ans;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(judge(mid))
		{
			ans=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
