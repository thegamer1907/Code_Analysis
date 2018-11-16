#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main()
{
	IOS;
	int n,m;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cin>>m;
	int brr[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>brr[i];
	}
	sort(arr,arr+n);
	sort(brr,brr+m);
	int count=0,i=0,j=0;
	while(i<n&&j<m)
	{
		if(abs(arr[i]-brr[j])<=1)
		{
			i++;
			j++;
			count++;
		}
		else if(arr[i]>brr[j])
			j++;
		
		else
			i++;
	}
	cout<<count<<"\n";
	return 0;
}