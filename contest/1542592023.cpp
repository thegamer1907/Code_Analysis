#include<bits/stdc++.h>
using namespace std;
int n;
bool flag;
string s, t;
int vis1[110], vis2[110];
int main()
{
	cin >> s >> n;
	for(int i = 1; i <= n; ++i) 
	{
		cin >> t;
		if(s == t) flag = true;
		vis2[t[0] - 'a'] = 1;
		vis1[t[1] - 'a'] = 1;
	}
	if((vis1[s[0] - 'a'] == 1 && vis2[s[1] - 'a'] == 1) || flag)
	puts("YES");
	else puts("NO");
	return 0;
}