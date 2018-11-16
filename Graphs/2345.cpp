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

int level(int i, vector<int> &A, vector<int> &R) {
	if (R[i] == -1) {
		if (A[i] == -2) R[i] = 1;
		else R[i] = level(A[i], A, R) + 1;
	}
	return R[i];
}


int main()
{
	ios_base::sync_with_stdio(0);
	//freopen("notation.in", "r", stdin);
	//freopen("notation.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> A(n);
	vector<int> R(n, -1);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		A[i]--;
	}
	int l = 0;
	for (int i = 0; i < n; i++) {
		l = max(l, level(i, A, R));
	}
	cout << l << "\n";
}