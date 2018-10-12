#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,m,max=0,sum=0,t;
	cin>>n>>m;
	long int A[n];
	for(long int i=0;i<n;i++)
	{
		cin>>A[i];
		if(A[i]>max)
		max=A[i];
	}
	for(long int i=0;i<n;i++)
	{
		sum=sum+max-A[i];
	}
	if(sum<=m)
	{
		sum=m-sum;
		t=sum/n;
		if(sum%n!=0)
		t++;
		cout<<max+t<<" "<<max+m;
		return 0;
	}
	else
	{
		cout<<max<<" "<<max+m;
	}
	return 0;
}