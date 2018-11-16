#include<bits/stdc++.h>
using namespace std;
int n,h,a,c;
int main()
{
	cin>>n>>h;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a>h)
			c++;
	}
	cout<<n+c;
	return 0;
}