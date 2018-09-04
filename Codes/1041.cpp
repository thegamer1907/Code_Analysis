#pragma comment(linker, "/STACK:100000000")
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <stdio.h>
#include <set>
#include <queue>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <list>
#include <functional>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <cstring>
#include <random>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	int n, k;
	cin >> n >> k;
	vector <char> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector <int> s1(n + 1);
	for (int i = 0; i < n; i++)
		if (a[i] == 'b')
			s1[i + 1] = s1[i] + 1;
		else s1[i + 1] = s1[i];
	vector <int> s2(n + 1);
	for (int i = 0; i < n; i++)
		if (a[i] == 'a')
			s2[i + 1] = s2[i] + 1;
		else s2[i + 1] = s2[i];
	int r = n+1;
	int l = 0;
	while (r - l > 1) {
		int mid = (r + l) / 2;
		bool flag = true;
		for (int i = 0; i < n - mid + 1; i++)
			if (s1[i + mid] - s1[i] <= k || s2[i + mid] - s2[i] <= k)
				flag = false;
		if (flag)
			r = mid;
		else l = mid;
	}
	cout << l;
	return 0;
}