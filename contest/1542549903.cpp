#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	string c[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	int x[n],y[n];
	int f=0,k=0;
	for(int i=0;i<n;i++)
	{
		int t=c[i].length();
		if(t==2&&c[i][0]==s[0]&&c[i][1]==s[1])
		{
			cout<<"YES";
			return 0;
		}
		{

		}
		if(c[i][0]==s[0])
		{
			x[f]=0;
			f++;
		}
		 if(c[i][t-1]==s[0])
		{
			x[f]=1;
			f++;
		}
		if(c[i][0]==s[1])
		{
			y[k]=0;
			k++;
		}
		 if(c[i][t-1]==s[1])
		{
			y[k]=1;
			k++;
		}
	}
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(x[i]>y[j])
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}
