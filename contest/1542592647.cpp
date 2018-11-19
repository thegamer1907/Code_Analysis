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

	string pass;
	cin >> pass;

	int cwords;
	cin >> cwords;

	vector<string> words (cwords);
	bool ans = false;
	for (int a = 0; a < cwords; a++) {
		cin >> words[a];
		if (words[a] == pass)
			ans = true;
	}

	if (!ans) {
		bool found1, found2;
		found1 = found2 = false;
		for (int a = 0; a < cwords; a++) {
			if (words[a][0] == pass[1])
				found1 = true;
			if (words[a][1] == pass[0])
				found2 = true;
		}
		if (found1 && found2)
			ans = true;
	}

	if (ans)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}