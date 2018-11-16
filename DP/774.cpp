#include<bits/stdc++.h>
using namespace std;

int countones(int *arr,int n,int i,int j){
	int sm=0;
	for (int k = i; k <=j; ++k)
	{
		sm+=(1-arr[k]);
	}
	for (int k = 0; k < n; ++k)
	{
		if((k<i || k>j )) sm+=arr[k];
	}
	return sm;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int d;
	if(n==1){
		cin>>d;
		if(d==1) cout<<0;
		else cout<<1;
		return 0;
	}
	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int mx=0;
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			mx = max(mx,countones(arr,n,i,j));
		}
	}
	cout<<mx;
	return 0;
}