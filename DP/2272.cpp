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

	int n, m;
	cin >> n >> m;
	vector<int> N(n);
	for (int i = 0; i < n; i++) cin >> N[i];
	vector<int> A(n);
	unordered_set<int> S;
	for (int i = n - 1; i >= 0; i--) {
		S.insert(N[i]);
		A[i] = S.size();
	}
	for (int i = 0; i < m; i++) {
		int t;
		cin >> t;
		cout << A[t - 1] << "\n";
	}
}