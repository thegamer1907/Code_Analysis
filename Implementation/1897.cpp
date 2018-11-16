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

	int n;
	cin >> n;

	int x0 = 0, y0 = 0, z0 = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		x0 += x;
		y0 += y;
		z0 += z;
	}

	cout << (x0 == 0 && y0 == 0 && z0 == 0 ? "YES" : "NO");
}
