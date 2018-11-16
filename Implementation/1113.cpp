#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	while(m)
	{
		for(int i=1;i<n;i++)
		{
			if(arr[i-1]=='B' && arr[i]=='G')
			{
				char c= arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=c;
				i++;
			}
		}
		m--;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
