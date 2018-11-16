#include<bits/stdc++.h>
using namespace std;
int a[101],b[101];
int n;
void fun()
{
	for(int i=1;i<=n;i++)
		a[i]=b[i];
}
int main()
{
	int ans=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
		{
			fun();
			for(int k=i;k<=j;k++)
				a[k]=!a[k];
			int sum=0;
			for(int i=1;i<=n;i++)
				if(a[i]==1)
					sum++;
			ans=max(ans,sum);
		} 
	cout<<ans<<endl;
	return 0;
}