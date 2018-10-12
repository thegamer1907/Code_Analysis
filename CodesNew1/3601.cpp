#include<bits/stdc++.h>
using namespace std;



int main()
{
	
	
	
	int n,m;
	cin>>n>>m;
	int t=m;
	int a[n],max=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		max=a[i];
	}
	sort(a,a+n);
	int sum=0,min;
	for(int i=0;i<n-1;i++)
		sum+=a[n-1]-a[i];
	
	if(sum<=0)
	{
		min=a[n-1];
		min=min+m/n+(m%n==0?0:1);
	}
	else if(m<=sum)
	min=a[n-1];
	else
	{
		m=m-sum;
		min=a[n-1];
		min=min+m/n+(m%n==0?0:1);
	}
	cout<<min<<" "<<max+t;
	
	
}
