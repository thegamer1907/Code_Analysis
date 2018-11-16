#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,f=0;
	cin>>n>>m;

	vector<int>a(n+1);

	for(i=1;i<n;i++)
	{
		cin>>a[i];
	}
	i=1;
	while(i<n)
	{
		i=i+a[i];

		if(m==i)
		{
			f=1;
			break;
		}
		else if(i>m)
		{
			f=0;
			break;
		}
		
		//i++;
	}

	if(f==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

	return 0;
}