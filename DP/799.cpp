#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a[1005],c1[1005],c2[1005],maxn=-1;
	c1[0]=c2[0]=0;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		c1[i]=c1[i-1];
		c2[i]=c2[i-1]; 
		if(a[i]==1)
			c1[i]++;
		else
			c2[i]++;
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=i;j<=n;j++)
			maxn=max(maxn,c1[n]-c1[j]+c1[i-1]+c2[j]-c2[i-1]);
	}
	cout<<maxn<<endl;
	return 0;
}
