#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			for(int k=j+1;k<s.size();k++)
			{
				t=(s[i]-48)*100+(s[j]-48)*10+(s[k]-48);
				if(t%8==0)
				{
					cout<<"YES"<<endl<<t;
					return 0;
				}
			}
			t=(s[i]-48)*10+(s[j]-48);
			if(t%8==0)
			{
				cout<<"YES"<<endl<<t;
				return 0;
			}
		}
		t=s[i]-48;
		if(t%8==0)
		{
			cout<<"YES"<<endl<<t;
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}