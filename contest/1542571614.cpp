#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <iomanip>

using namespace std;
typedef long long ll;

inline void boostIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
}
int main() {
	boostIO();
	string p, s;
	int n;
	bool a = false, b = false, c = false;
	cin >> p >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s[1] == p[0])a = true;
		if (s[0] == p[1])b = true;
		if (s == p)c = true;
		swap(s[0], s[1]);
		if (s == p)c = true;
	}
	if ((a&&b) || c)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}