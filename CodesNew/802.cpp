#include<iostream>
#include<string>
using namespace std;
string a[3000+10];
string b[3000+10];
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int j=0;j<m;j++)
			cin>>b[j];
		int comm=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])
					comm++;
			}
		if(comm%2==0)
		{
			if(n-comm>m-comm)
				cout<<"YES";
			else
				cout<<"NO";
		}
		else
		{
			if(n-comm>m-comm-1)
				cout<<"YES";
			else
				cout<<"NO";
		}
		
	}
	
	return 0;
}