#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for (int i=0; i<n; i++)
	{
		string x;
		cin>>x;
		if (x=="Tetrahedron")
		{
			ans+=4;
		}
		else if (x=="Cube")
		{
			ans+=6;
		}
		else if (x=="Octahedron")
		{
			ans+=8;
		}
		else if (x=="Dodecahedron")
		{
			ans+=12;
		}
		else
		{
			ans+=20;
		}
	}
	cout<<ans;
	return 0;
	
}