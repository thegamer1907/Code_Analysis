#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n,t,i=0;
	cin>>n>>t>>s;
	vector<int> b;

	while(i<s.size())
	{
		if(s.at(i)=='B')
			b.push_back(i);
		i++;
	}

	for(int i=0;i<t;i++)
	{
		for(int j=0;j<b.size();j++)
		{
			if(b[j]+1<n && s.at(b[j]+1)=='G')
			{
				s.at(b[j])='G';
				s.at(b[j]+1)='B';
				b[j]++;
			}
		}
	}
	cout<<s<<endl;
	return 0;

}