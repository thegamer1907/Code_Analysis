#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s, ss;
	int n;
	cin>>s;
	cin>>n;
	vector<string> v;
	int flag = 0;
	for(int i=0;i<n;i++)
	{
		cin>>ss;
		v.push_back(ss);
		if(ss == s)
		{
			flag = 1;
		}
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=i;j<v.size();j++)
		{
			string s1 = "";
			s1 += (char)v[j][1];
			s1 += (char)v[i][0];
			string s2 = "";
			s2 += (char)v[i][1];
			s2 += (char)v[j][0];
			if(s1 == s || s2 == s)
			{
				flag =1;
				break;
			}
		}
	}
	if(flag == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}