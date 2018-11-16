#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char D[n][5];
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<5; j++)
		{
			cin>>D[i][j];
		}
	}
	bool ok=0;
	for (int i=0; i<n; i++)
	{
		if (D[i][0]=='O' && D[i][1]=='O')
		{
			D[i][0]='+';
			D[i][1]='+';
			ok=1;
		}
		else
		{
			if (D[i][3]=='O' && D[i][4]=='O')
			{
				D[i][3]='+';
				D[i][4]='+';
				ok=1;
			}
		}
		if (ok)
		{
			break;
		}
	}
	if (!ok)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES"<<"\n";
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout<<D[i][j];
		}
		cout<<"\n";
	}
}