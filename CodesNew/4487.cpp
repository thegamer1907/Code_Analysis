#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{	cin>>a[i];
	}	
	sort(a,a+n);
	int count=0;
	for(int i=0, j=n/2;i<n/2 && j<n;j++)
	{
		if(2*a[i]<=a[j]) count++,i++;
	}
	cout<<n-count;
}