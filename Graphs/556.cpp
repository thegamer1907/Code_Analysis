#include <bits/stdc++.h>
#include <iostream>
#define mod 1000000007
using namespace std;
int main()
{	int n,t;
	cin>>n>>t;
	char q[n];
	cin>>q;
	while(t--)
	{
		for(int i=1;i<n;)
		{	
			if(q[i-1]=='B'&&q[i]=='G')
			{
				char temp=q[i-1];
				q[i-1]=q[i];
				q[i]=temp;
				i+=2;
			}
			else i++;
		}
	}
	cout<<q<<"\n";
	return 0;
}
