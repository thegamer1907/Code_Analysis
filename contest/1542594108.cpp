
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

string str[133];

bool first, second;

int main()
{
	input;
	string st;
	cin >> st;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (str[i] == st)
		{
			cout << "YES";
			return 0;
		}
		if (str[i][0] == st[1]) second = 1;
		if (str[i][1] == st[0]) first = 1;
	}
	if (first && second) cout << "YES";
	else cout << "NO";
    return 0;
}

