#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <cmath>
#include <random>
#include <iomanip>
#include <functional>
#include <list>
#include <unordered_map>
#include <sstream>
#include <istream>
#include <iterator>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	FILE *stream;
	freopen_s(&stream, "input.txt", "r", stdin);
	// freopen_s(&stream, "output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	int cnt[2] = {};
	bool danger = false;
	for (char c : s)
	{
		int x = c - '0';
		cnt[x]++;
		cnt[1 - x] = 0;

		if (cnt[x] >= 7)
			danger = true;
	}

	cout << (danger ? "YES" : "NO");
}
