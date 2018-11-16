#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <queue>
#include <cassert>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	//freopen("notation.in", "r", stdin);
	//freopen("notation.out", "w", stdout);
	int n;
	cin >> n;

	int l = 1;
	int c = 1;

	int p1, p2;
	cin >> p1;

	for (int i = 1; i < n; i++) {
		cin >> p2;
		if (p2 <= p1) {
			l = max(c, l);
			c = 0;
		}
		c++;
		p1 = p2;
	}

	cout << max(c, l) << "\n";
}