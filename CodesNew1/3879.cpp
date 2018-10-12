#include<bits/stdc++.h>
using namespace std;
int n;

bool check(int a[], long long int z)
{
	long long int sum=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>z)
			return false;
		else
			sum+=(z-a[i]);
	}
	//cout<<sum<<endl;
	if(sum>=z)
		return true;
	else
		return false;
}

int main()
{
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	long long int low=0, high=1000000000000, mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(check(a, mid))
			high=mid;
		else
			low=mid;
		if(high-low==1)
			break;
		//cout<<mid<<endl;
	}
	if(check(a, low))
		cout<<low;
	else
		cout<<high;
	return 0;
}