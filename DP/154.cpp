#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2;
	cin>>n1;
	int a[n1];
	for(int i=0; i<n1; i++)
		cin>>a[i];
	cin>>n2;
	int b[n2];
	for(int i=0; i<n2; i++)
		cin>>b[i];
	sort(a, a+n1);
	sort(b, b+n2);
	int a1=0, b1=0;
	int count=0;
	for(int i=0, j=0; i<n1 && j<n2; )
	{
		if(abs(a[i]-b[j])<=1)
		{
			count++;
			i++;
			j++;
		}
		else if(a[i]<b[j])
			i++;
		else if(a[i]>b[j])
			j++;
	}
	cout<<count;
	return 0;
}