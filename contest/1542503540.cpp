#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	cin>>s1;
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		v.push_back(temp);
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i][1]==s1[0])
		{
			for(int j=0;j<v.size();j++)
			{
				if(v[j][0]==s1[1])
				{
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
		if(v[i][0]==s1[0] && v[i][1]==s1[1])
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}