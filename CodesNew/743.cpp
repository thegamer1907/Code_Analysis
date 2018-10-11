#include <vector>
#include <queue>
#include <stack>
#include <fstream>
#include <functional>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>
#include <set>
#include <cmath>
#include <ctime>
#include <cstring>
#include <map>
#include <stack>
#include <utility>
#include <tuple>
#include <unordered_map>
#define pause system("pause")
#define input ios_base::sync_with_stdio(0)	 
#define itn int
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

string s1[1005];
string s2[1005];

int main()
{
	input;
	int n, m;
	cin >> n >> m;
	set<string> st1;
	vector <string> dups;
	for (int i = 0; i < n; i++)
	{
		cin >> s1[i];
		st1.insert(s1[i]);
	}
	int dup = 0;
	int size;
	for (int i = 0; i < m; i++)
	{
		cin >> s2[i];
		size = st1.size();
		st1.insert(s2[i]);
		if (size == st1.size())
		{
			dups.push_back(s2[i]);
		}
	}
	bool win;
	win = (dups.size() & 1);
	n -= dups.size();
	m -= dups.size();
	while (1)
	{
		if (win)
		{
			if (m) m--;
			else
			{
				cout << "YES";
				break;
			}
		}
		else
		{
			if (n) n--;
			else
			{
				cout << "NO";
				break;
			}
		}
		win = 1 - win;
	}	
	return 0;
}