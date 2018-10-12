#include <bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int max=0;
	for(int i=0;i<n;i++)
		if(max<a[i])
			max=a[i];
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=max-a[i];
	if(m-sum>=0)
	{
		if((m-sum)%n==0) x=max+(m-sum)/n;
		else x=max+(m-sum)/n+1;
	}
	else x = max;
	return cout<<x<<" "<<max+m,0;
}
