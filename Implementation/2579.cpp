#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,h;
	cin>>n>>h;
	int D[n];
	for (int i=0; i<n; i++)
	{
		cin>>D[i];
	}
	int ans=0;
	for (int i=0; i<n; i++)
	{
		if (D[i]<=h)
		{
			ans++;
		}
		else
		{
			ans=ans+2;
		}
	}
	cout<<ans;
	return 0;
}