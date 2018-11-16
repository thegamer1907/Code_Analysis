#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,a,count=0,max;
	cin>>n>>a;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(i==a-1)
	    max=arr[i];
	}   
	
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=max&&arr[i]>0)
			count++;
	}
	cout<<count;
	return 0;
}