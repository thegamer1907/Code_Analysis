#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	
	int a=0;
	int b=0;
	for(int i =0;i<n;i++)
	{
		string x;
		cin>>x;
		if(x==s)
		{
			a=1;
			b=1;
		}
		if(x[0]==s[1])
			a=1;
		if(x[1]==s[0])
			b=1;
	}

	if(a==1&&b==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}
