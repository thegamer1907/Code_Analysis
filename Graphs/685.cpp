#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>n>>t;
	char c[50];
	cin>>c;
	while(t>0)
	{
		for(int i=0;i<n;i++)
		{
			if(c[i]=='B'&&c[i+1]=='G')
			{
				c[i]='G';
				c[i+1]='B';
				i++;
			}
		}
		t--;
	}
	cout<<c;
	return 0;
}
