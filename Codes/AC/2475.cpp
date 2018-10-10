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
int a[10000001];
bool b[10000001];
int c[10000001];
long long s[10000001];
int main()
{
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int w;
		scanf("%d", &w);
		a[w]++;
	}
	for (int i = 2; i < 10000001; i++) {
		if (b[i])
			continue;
		c[i] = a[i];
		for (int j = i + i; j < 10000001; j += i) {
			c[i] += a[j];
			b[j] = true;
		}
	}
	for (int i = 1; i < 10000001; i++)
		s[i] = s[i - 1] + c[i];
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int w, e;
		cin >> w >> e;
		printf("%d\n",s[min(10000000, e)] - s[min(10000000, w - 1)]);
	}
	return 0;
}