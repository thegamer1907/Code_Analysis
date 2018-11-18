#include<bits/stdc++.h>
using namespace std;

int n;
string s;
bool mark1[26 + 7], mark2[26 + 7];

int main()
{
	cin >> s >> n;
	for(int i = 0; i < n; ++ i)
	{
		string s1;
		cin >> s1;
		mark1[s1[0] - 'a'] = 1;
		mark2[s1[1] - 'a'] = 1;
		if(s1 == s)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	if(mark2[s[0] - 'a'] && mark1[s[1] - 'a'])
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	
	return 0;
}
