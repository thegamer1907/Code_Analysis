#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	char a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	while(t--)
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i]=='B'&&a[i+1]=='G')
			{
				a[i]='G';
				a[i+1]='B';
				i++;
			}
		}
	
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
}
