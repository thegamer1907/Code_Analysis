#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int a[105],sum[105];
int main()
{
	int n,sum=0; 
	cin>>n;
	int i,j,k;
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]==1)
		{
			sum++;
		}
	}
	int mxa=-1;
	for (i=1;i<=n;i++)
	{
		for (j=i;j<=n;j++)
		{
			int now1=0,now2=0;
			for (k=i;k<=j;k++)
			{
				if (a[k]==1)
				now1++;
				else
				now2++;
			}
			mxa=max(mxa,now2-now1);
		}
	}
	cout<<sum+mxa;
	return 0;
}