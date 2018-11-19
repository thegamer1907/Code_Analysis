#include <bits/stdc++.h>
using namespace std;
#define rg register

string s, str;
int n;
int wh1, wh2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s >> n;
	while(n--)
	{
		cin >> str;
		if(str[str.length() - 1] == s[0])
			wh1 = true;
		if(str[0] == s[1])
			wh2 = true;
		if(str == s || (wh1 && wh2))
			return(cout << "YES"), 0; 	
	}
	return (cout << "NO"), 0;
}