#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int j;
	cin>>j;
	
	vector<string>vec;
	string a;
	for(int i=0;i<j;i++)
	{
		cin>>a;
		vec.push_back(a);
	}
	
	for(int i=0;i<j;i++)
	{
		for(int k=0;k<j;k++)
		{
			if(s==vec[i])
			{
				cout<<"YES"<<endl;
				return 0;
			}
			
			if(s[0]==vec[i][1]&&s[1]==vec[k][0])
			{
				cout<<"YES"<<endl;
				return 0;
			}
			if(s[0]==vec[i][1]&&s[1]==vec[i][0])
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	
	return 0;
}
