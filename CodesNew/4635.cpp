#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int j,i,n;
	cin>>n;
	int a[n];
	vector <int> v(n);
	
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	i=0;
	for(j=n/2;j<n;j++)
	{
		if(a[j]>=2*a[i])
		i++;
	}
	
	cout<<n-min(n/2,i);
}
