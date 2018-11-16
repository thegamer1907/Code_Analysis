#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.size();
	int flag = 0, ida, idb, a, b;
	for(int i = 0; i+1 < len; i++)
	{
		if(s[i] == 'A' and s[i+1] == 'B'){
			flag = 1;
			ida = i, idb = i+1;
			break;
		}
	}
	if(flag == 0) { cout << "NO"; return 0; }
	flag = 0;
	for(int i = 0; i+1 < len; i++)
	{
		if(s[i] == 'B' and s[i+1] == 'A'){
			flag = 1;
			a = i, b = i+1;
			break;
		}
	}
	if(flag == 0) { cout << "NO"; return 0; }
	for(int i = 0; i+1 < len; i++)
	{
		if(s[i] == 'B' and s[i+1] == 'A' and ida != (i+1) and idb != i)
		{
			cout << "YES";
			return 0;
		}
	}
	for(int i = 0; i+1 < len; i++)
	{
		if(s[i] == 'A' and s[i+1] == 'B' and b != i and a != (i+1))
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}