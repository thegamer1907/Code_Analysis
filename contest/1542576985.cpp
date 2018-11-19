#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

const int maxk = 16;
struct Node
{
	string st;
	string ed;
	set<string> table[maxk + 1];

};

Node Union(Node& a, Node& b)
{
	Node ret;

	for (int i = 1; i <= maxk; i++)
	{
		for (set<string>::iterator p = a.table[i].begin(); p != a.table[i].end(); ++p)
		{
			ret.table[i].insert(*p);
		}
		for (set<string>::iterator p = b.table[i].begin(); p != b.table[i].end(); ++p)
		{
			ret.table[i].insert(*p);
		}
	}

	string s = a.ed + b.st;
	int l = s.length();
	for (int len = 1; len <= maxk; len++)
	{
		for (int i = 0; i < l - len + 1; i++)
		{
			ret.table[len].insert(s.substr(i, len));
		}
	}
	if (l <= maxk)
	{
		ret.st = s;
		ret.ed = s;
	}
	else
	{
		ret.st = s.substr(0, maxk);
		ret.ed = s.substr(l - maxk);
	}
	if (a.st.length() == maxk)
	{
		ret.st = a.st;
	}
	if (b.ed.length() == maxk)
	{
		ret.ed = b.ed;
	}
	return ret;
}

int check(Node &a)
{
	for (int k = maxk; k > 0; k--)
	{
		if (a.table[k].size() == 1 << k)
		{
			return k;
		}
	}
	return 0;
}
vector<Node> a;
int n;

int main()
{
	cin >> n;
	a.resize(n + 1);
	for (int i = 1; i <= n; i++)
	{
		string s;
		cin >> s;
		int l = s.length();
		for (int len = 1; len <= maxk; len++)
		{
			for (int j = 0; j <= l - len; j++)
			{
				a[i].table[len].insert(s.substr(j, len));
			}
		}
		if (l <= maxk)
		{
			a[i].st = s;
			a[i].ed = s;
		}
		else
		{
			a[i].st = s.substr(0, maxk);
			a[i].ed = s.substr(l - maxk, maxk);
		}
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		a.push_back(Union(a[x], a[y]));
		cout << check(a.back()) << endl;
	}
	return 0;
}