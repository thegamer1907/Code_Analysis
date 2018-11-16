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
	
	int n, k, i;
	cin >> n >> k;

	for (i = 0; 5 * (i + 1) * (i + 2) / 2 + k <= 240; i++);

	cout << min(i, n) << "\n";

}