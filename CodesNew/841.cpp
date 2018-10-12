#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;
vector<string> p, e;
map<string, int> mymap;
int main()
{
	//freopen("in.txt", "r", stdin);
	int n, m;
	string s;
	while (cin >> n >> m)
	{
		p.clear(), e.clear(), mymap.clear();
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			p.push_back(s);
			mymap[s]++;
		}
		int cnt = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> s;
			e.push_back(s);
			if (mymap[s] == 1)
				cnt++;
		}
		if (p.size() > e.size()||(p.size()==e.size()&&cnt%2!=0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
    return 0;
}