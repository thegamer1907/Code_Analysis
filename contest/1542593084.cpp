#include "bits/stdc++.h"
using namespace std;

int main()
{
	string s;
	cin >> s;


	int n;
	cin >> n;

	string str;
	bool f = false, ff = false;
	for(int i = 0; i < n; ++i)
	{
		string ss;
		cin >> ss; 
		if(ss == s) 
		{
			puts("YES");
			return 0;
		}
		if(ss[0] == s[1]) f = true;
		if(ss[1] == s[0]) ff = true;
	}
	if(f and ff) puts("YES");
	else puts("NO");
}