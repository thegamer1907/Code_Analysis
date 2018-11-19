#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <bitset>
#include <limits>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <functional>
#include <map>
#include <queue>
#include <utility>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main ()
{
	ios_base::sync_with_stdio (false);

#ifndef ONLINE_JUDGE
	freopen ("input0.in", "r", stdin);
	freopen ("output.out", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;

	vector<bool> ct (1 << k, false);
	for (int a = 0; a < n; a++) {
		int t = 0, in;
		for (int b = 0; b < k; b++) {
			cin >> in;
			t = t * 2 + in;
		}
		ct[t] = true;
	}

	if (ct[0]) {
		cout << "YES";
		return 0;
	}

	for (int a = 1; a < (1 << k); a++) {
		if (!ct[a])
			continue;
		for (int b = 0; b < (1 << k); b++) {
			if ((a & b) == 0 && ct[b]) {
				cout << "YES";
				return 0;
			}
		}
	}

	cout << "NO";
	return 0;
}