#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l=0,m,n,c=0;

	cin>>n>>m;

	vector<int>a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	i=0;j=0;
	while(i<n)
	{
		l=l+a[i];
		if(l<=m)
		{
			i++;
			c++;
		}
		else
		{
			l=l-a[j];
			j++;i++;

		}
	}

	cout<<c;
	return 0;
}