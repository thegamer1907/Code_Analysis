#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int h[1000];
int main()
{
	int n,m;
    int cnt=0;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<m;i++)
	{
		h[arr2[i]]++;
	}
sort(arr1,arr1+n);
	for(int i=0;i<n;i++)
	{
		if(h[arr1[i]-1]!=0)
		{
			h[arr1[i]-1]--;
			cnt++;
		}
		else if(h[arr1[i]]!=0)
		{
			h[arr1[i]]--;
			cnt++;
		}
		else if(h[arr1[i]+1]!=0)
		{
			h[arr1[i]+1]--;
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}