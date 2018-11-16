#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int D[n];
	int max=0;
	for (int i=0; i<n; i++)
	{
		cin>>D[i];
		if (D[i]>max)
		{
			max=D[i];
		}
	}
	int ans=0;
	for (int i=0; i<n; i++)
	{
		ans=ans+(max-D[i]);
	}
	cout<<ans;
	return 0;
}