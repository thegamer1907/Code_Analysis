#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
#include <map>
#include <set>

#define INF 0x3f3f3f3f
#define memset0(x) memset(x, 0, sizeof(x))
#define memsetM1(x) memset(x, -1, sizeof(x))
#define memsetINF(x) memset(x, INF, sizeof(x))

using namespace std;

string arr[100005];

int main()
{
	string str;
	cin >> str;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bool yes = false;
	bool back = false;
	bool front = false;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == str)
		{
			yes = true;
		}
		if (arr[i][0] == str[1])
		{
			back = true;
		}
		if (arr[i][1] == str[0])
		{
			front = true;
		}
	}
	if (back && front)
	{
		yes = true;
	}

	if (yes)
	{ 
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	cin.get();
	cin.get();
	return 0;
}