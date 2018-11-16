#include<iostream>
using namespace std;

int a[55];
int n,k;

int main()
{
	cin>>n>>k;
	int mmcount=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		if(a[i]>=a[k-1]&&a[i]>0)
			mmcount++;
	cout<<mmcount;
	return 0;
}