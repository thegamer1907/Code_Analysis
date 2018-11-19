#include<iostream>
using namespace std;
int main()
{
	int n,f=0,s=0;
	char pass[3],x[2];
	cin>>pass[0]>>pass[1];
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>x[0]>>x[1];
		if(x[0] == pass[0] && x[1] == pass[1])
		{
			cout<<"YES";
			return 0;
		}
		if(x[1] == pass[0])
		{
			f = 1;
		}
		if(x[0] == pass[1])
		{
			s = 1;
		}
	}
	if(s && f)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}