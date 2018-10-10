#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n,l;
	cin>>n>>l;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	double max=0;
	int b=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]-b>max)
		max=a[i]-b;
		b=a[i];
	}
	max/=2;
	if(a[0]>max)
	max=a[0];
	if(l-a[n-1]>max)
	max=l-a[n-1];
	printf("%.10f\n",max);
	
	return 0;
}