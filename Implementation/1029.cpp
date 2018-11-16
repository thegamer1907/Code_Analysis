#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	char q[n];
	for(int i=0;i<n;i++)
	{
		cin>>q[i];
	}
	while(x)
	{
	
		for(int i=0;i<n-1;i++)
		{
			if(q[i]=='B'&&q[i+1]=='G')
			{
				q[i]='G';
				q[i+1]='B';
				i++;
			}
		}x--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<q[i];
	}
}
