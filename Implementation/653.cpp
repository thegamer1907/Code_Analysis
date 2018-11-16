#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n;
	cin>>k;
	int a[n] = {};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int count = 0;
	int l=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] >= a[k-1] && a[i] > 0)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	
	cout<<count;
	return 0;
}