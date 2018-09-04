#pragma comment(linker, "/STACK:100000000")
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <string>
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
int main()
{
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	string str;
	cin >> str;
	long long a[3] = { 0 };
	for (int i = 0; i < str.length(); i++)
		switch (str[i]) {
		case 'B': a[0]++; break;
		case 'S': a[1]++; break;
		case 'C': a[2]++; break;
		}
	long long b[3];
	for (int i = 0; i < 3; i++)
		cin >> b[i];
	long long p[3];
	for (int i = 0; i < 3; i++)
		cin >> p[i];
	long long r;
	cin >> r;
	if (a[0] == 0 && a[1] == 0) {
		cout << (r / p[2] + b[2]) / a[2];
		return 0;
	}
	if (a[1] == 0 && a[2] == 0) {
		cout << (r / p[0] + b[0]) / a[0];
		return 0;
	}
	if (a[0] == 0 && a[2] == 0) {
		cout << (r / p[1] + b[1]) / a[1];
		return 0;
	}
	long long r1 = 10000000000000LL;
	long long l = 0LL;
	long long mid = 0LL;
	while (r1 - l > 1) {
		mid = (r1 + l) / 2;
		if (max(0LL,(mid*a[0]-b[0])*p[0]) + max(0LL,(mid*a[1] - b[1])*p[1]) + max(0LL,(mid*a[2] - b[2])*p[2]) > r) {
				r1 = mid;
				continue;
			}
		l = mid;
	}
	cout << l;
	return 0;
}