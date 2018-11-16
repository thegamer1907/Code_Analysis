#include<bits/stdc++.h>
using namespace std;

string s;
bool uda[30];

int main()
{
	getline(cin,s);
	int ans = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			if(uda[s[i]-'a']) continue;
			uda[s[i]-'a']=1;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
