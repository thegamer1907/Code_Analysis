#include <bits/stdc++.h>
using namespace std;
long n,t;
long a[100000];
int main()
{	cin>>n>>t;
	for (long i = 1; i < n; ++i)
	{
		cin>>a[i];
	}
	long i=1;
	while(i < t)
	{	i = i+a[i];

	}
	if(i == t)
	{
		cout<<"YES";
	}else
	{
		cout<<"NO";
	}


	return 0;
}