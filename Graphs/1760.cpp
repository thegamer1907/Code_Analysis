#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,t,i;
	cin>>n>>t;
	int arr[n];
	for(i=1; i<n; i++)
		cin>>arr[i];
	i=1;
	while(i!=t && i<n)
		i=arr[i]+i;	
	if(i==t)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
