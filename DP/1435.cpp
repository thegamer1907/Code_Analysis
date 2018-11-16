#include <iostream>
using namespace std;
int n;
int a[110]={0};
int res=0;
int main()
{
	cin >>n;
	for (int i=0;i<n;i++)
	{
		int x;
		cin >>x;
		a[i+1]=a[i]+x;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=i;j<=n;j++)
		{
			int sum=j-i+1;
			int t=a[i-1]+a[n]-a[j]+sum-(a[j]-a[i-1]);
			res=max(res,t);
		}
	}
	cout <<res;
	return 0;
}
