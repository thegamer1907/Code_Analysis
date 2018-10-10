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
#pragma comment(linker, "/STACK:256000000")
using namespace std;

#define in(s) freopen(s, "r", stdin)
#define out(s) freopen(s, "w", stdout)
#define forn(i, n) for (int i = 0; i < n; i++)
#define endl '\n'
#define mp make_pair

typedef long long ll;
typedef long double ld;

int divup(int a, int b)
{
	return a / b + (a % b != 0);
}

int main()
{
	//in("input.txt");
	//out("output.txt");
	srand(1373737);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector <int> arr(n);
	forn(i, n)
		cin >> arr[i];

	int ans = (int)2e+9, ansi = -1;
	forn(i, n)
	{
		int now = i + divup(max(0, arr[i] - i), n) * n;
		if (now < ans)
		{
			ans = now;
			ansi = i + 1;
		}
	}
	cout << ansi;

	return 0;
}