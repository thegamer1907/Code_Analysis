#include<iostream>
#include<cstdio>
using namespace std;
int n,a[110],b[110],i,j,l,sum,ans=-1000;
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=b[i-1]+a[i];
	}
	for(i=0;i<n;i++)
	 for(j=i;j<n;j++)
	 {
	 	l=j-i+1;
	 	sum=b[n-1]+b[i-1]-b[j]+l-(b[j]-b[i-1]);
	 	ans=max(sum,ans);
	 }
	 cout<<ans<<endl;
	 return 0;
}