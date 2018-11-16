#include <iostream>

using namespace std;

int main()
{
	int k,n, wynik=0;
	
	cin>>n>>k;
	
	int a[n];
	
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	for(int i=0; i<n; i++)
	{
		if(a[i]>0 && a[k-1]<=a[i])
		{
			wynik++;
		}
	}
	
	cout<<wynik;
	return 0;
}
