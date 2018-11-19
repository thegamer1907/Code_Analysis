#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <bitset>
#include <ctime>
using namespace std;

#define in(s) freopen(s, "r", stdin)
#define out(s) freopen(s, "w", stdout)
#define forn(i, n) for (int i = 0; i < n; i++)
#define endl '\n'

typedef long long ll;
typedef long double ld;

int main()
{
	//in("input.txt");
	//out("output.txt");
	srand(1373737);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int n;
	cin >> n;

	vector <string> arr(n);
	forn(i, n)
	{
		cin >> arr[i];
		if (arr[i] == s)
		{
			cout << "YES";
			return 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string cur = "";
			cur += arr[i][1];
			cur += arr[j][0];
			if (cur == s)
			{
				cout << "YES";
				return 0;
			}
			cur = "";
			cur += arr[j][1];
			cur += arr[i][0];
			if (cur == s)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	
	return 0;
}