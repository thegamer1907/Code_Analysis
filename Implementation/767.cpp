#include<bits/stdc++.h>
using namespace std;
#define itn int
int main()
{
	itn n,a;
	cin>>a>>n;
	string s;
	cin>>s;
	itn lenth=s.size();
	for(itn i=0;i<n;i++)
	{
		for(itn j=0;j<lenth;j++)
		{
			if(s[j]=='B'&&s[j+1]=='G')
			{
				swap(s[j],s[j+1]);j++;
			}
		}
	}
	cout<<s;
	return 0;
}