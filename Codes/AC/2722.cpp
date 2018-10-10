#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int g[1000000] = {}, ms = 0;
	
	for (int i = 1, r = 0, l = 0; i < s.size(); i++)
	{
		if (r >= i)
			g[i] = min(g[i-l], r-i+1);
		
		while (i+g[i] < s.size() && s[g[i]] == s[i+g[i]])
			g[i]++;
			
		if (i+g[i]-1 > r)
			r = i+g[i]-1, l = i;
	}
	
	if (s.size() < 3)
	{
		cout << "Just a legend";
		return 0;
	}
	
	for (int i = 1; i < s.size(); i++)
		if (i+g[i] == s.size())
			ms = max(ms, g[i]-1);
		else
			ms = max(ms, g[i]);
			
	if (!ms)
	{
		cout << "Just a legend";
		return 0;
	}
	
	for (int i = s.size()-ms; i < s.size(); i++)
		if (i+g[i] == s.size())
		{
			cout << s.substr(i);
			return 0;
		}
	
	cout << "Just a legend";
}