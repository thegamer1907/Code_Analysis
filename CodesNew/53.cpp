//@samraj2k
//#2ksr
//Code Mat Chapna
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	long long int n,l;
	cin>>n>>l;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	double min=2*arr[0],start=0,d;
	for (int i = 0; i < n; ++i)
	{
		d=arr[i]-start;
		start=arr[i];
if (d>min)
{
	min=d;
}
	}

	if (2*(l-arr[n-1])>min)
	{
		min=2*(l-arr[n-1]);
	}
cout<<fixed<<setprecision(10)<<min/2;
	return 0;
}