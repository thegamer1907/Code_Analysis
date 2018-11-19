#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int imax = INT_MAX;
int imin = INT_MIN;
ll llmax = LLONG_MAX;
ll llmin = LLONG_MIN;

int  main()
{
	string par;
	cin >> par;
	int n;
	cin >> n;
	set<char>  s1, s2;
	set<string> s3;
	for (int i = 0; i < n; i++)
	{
		string t;
		cin >> t;
		s1.insert(t[0]);
		s2.insert(t[1]);
		s3.insert(t);
	}
	set<string>::iterator it = s3.find(par);
	if (it != s3.end())
		cout << "YES" << endl;
	else
	{
		set<char>::iterator it2 = s2.find(par[0]);
		set<char>::iterator it3 = s1.find(par[1]);
		if (it2 != s2.end() && it3 != s1.end())
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}