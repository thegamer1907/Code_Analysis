#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

typedef long long ll;
using namespace std;

string sr,s[777];
int main()
{
	cin>>sr;
	int n; cin>>n;
	bool c=0;
	for(int i=0;i<n;i++)
	{
		cin>>s[i]; if(sr==s[i])c=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[i][1]==sr[0] && s[j][0] == sr[1]) c=1;
		}
	}
	if (c)puts("YES"); else puts("NO");
}