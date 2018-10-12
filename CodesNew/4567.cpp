#include<bits/stdc++.h>
using namespace std;
int a[510000];
int main()
{
    int n;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort (a,a+n);
	int sum=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]>=2*a[sum]) 
		sum++;
	}
	int ans=min(n/2, sum);
	cout<<n-ans;
}