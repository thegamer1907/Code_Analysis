#include<bits/stdc++.h>
using namespace std;
int main()
{
	string pass,bark[105];
	int n,i,j;
	cin>>pass;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>bark[i];
		if(bark[i]==pass)
		{
			cout<<"YES"; exit(0);
		}
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(bark[i][1]==pass[0] && bark[j][0]==pass[1])
			{
				cout<<"YES"; exit(0);
			}
	cout<<"NO";
}