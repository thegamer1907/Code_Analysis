#include <iostream>

using namespace std;

string s[500000];

inline int  lex(string s, string t)
{
	if(s == t)
		return 0;
	if(s == "#")
		return 2;
	if(t == "#")
		return 1;	
	for(int i = 0 ; i < min(s.size(), t.size()); i ++)
	{
		if(s[i] > t[i])
		{
			return 1;
		}
		if(s[i] < t[i])
		{
			return 2;
		}
	}
	if(s.size() > t.size())
		return 1;
	else	return 2;	
}

inline string del(string s, int p)
{
	string t;
	for(int i = 0; i < p; i ++)
	{
		if(s[i] != ' ' && i <= p - 1)
			t += s[i];
	}
	return t;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
		cin >> s[i];
	}
	for(int i = n - 1 ; i > 0; i --)
	{
		if(lex(s[i], s[i - 1]) == 2 && s[i - 1].size() > s[i].size())
		{
			s[i - 1] = del(s[i - 1], s[i].size());
		}
		if(lex(s[i], s[i - 1]) == 2)
		{
			for(int j = 0; j < s[i].size(); j ++)
			{
				if(s[i][j] < s[i - 1][j])
				{
					s[i - 1] = del(s[i - 1], j);
					j = s[i].size() + 100;
				}
			}
		}
	}	
	for(int i = 0 ; i < n; i ++)
		cout << s[i]<<endl;
	return 0;	
}











