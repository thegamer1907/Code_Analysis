
#include <iostream>
#include <queue>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>
#include <utility>
#include <iomanip>
#include <functional>
#include <algorithm>
#include <set>
#include <cstdio>
#include <stack>
#include <map>	  
#include <cstdio>
#include <cassert>
#include <ctime>
#include <cstring>
using namespace std;

#define pause system("pause")

#define input ios_base::sync_with_stdio(0)
//#define int long long

typedef  long long ll;
typedef  unsigned long long	ull;
typedef  pair<long long, long long> pll;
typedef  pair<int, int> pii;

int n, k;
inline bool andstuff(string s1, string s2)
{
	int c = 0;
	for (int i = 0; i < k; i++)
	{
		if (s1[i] == '1' && s2[i] == '1') return 0;
	}
	return 1;
}

bool a[100005][5];

int main()
{
	input;
	
	cin >> n >> k;	
	set <string> s;
	for (int i = 0; i < n; i++)
	{
		string st;
		for (int j = 0; j < k; j++)
		{
			cin >> a[i][j];
			st += a[i][j] + '0';
		}
		s.insert(st);		
	}
	for (auto qwe : s)
	{
		for (auto asd : s)
		{
			if (andstuff(qwe, asd))
			{
				cout << "YES";
				return 0;
			}	
		}
	}
	cout << "NO";
	
    return 0;
}

