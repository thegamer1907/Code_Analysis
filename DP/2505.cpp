#include<bits/stdc++.h>
using namespace std;
int n,a[200000],mx=1,c=1;
int main()
{
	cin>>n>>a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>a[i-1])
		{
			c++;
			mx=max(mx,c);
		}
		else
			c=1;
	}
	cout<<mx;
	return 0;
}
