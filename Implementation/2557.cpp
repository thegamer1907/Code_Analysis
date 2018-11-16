#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#include <iterator>
#include <random>
using namespace std;

int main() {
#pragma warning(disable:4996)
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, h;
	cin >> n >> h;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > h) {
			sum += 2;
		}
		else {
			sum++;
		}
	}
	cout << sum;
	return 0;
}