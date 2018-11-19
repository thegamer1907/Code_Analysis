#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <climits>

#include <sstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false)

typedef long double ld;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	h  *= 30;
	m  *= 6;
	s  *= 6;
	t1 *= 30;
	t2 *= 30;

	if (s > 0) {
		++m;
	}
	if (m > 0) {
		++h;
	}

	map<int, int> coord;
	coord[h]; coord[m]; coord[t1]; coord[t2]; coord[s];

	int j = 0;
	for (auto &x : coord) {
		x.second = j++;
	}

	if ((coord[t1] + 1) % j == coord[t2] || (coord[t2] + 1) % j == coord[t1]) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
