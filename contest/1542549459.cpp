#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <string>
#include <stdio.h>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <queue>
#include <map>
#include <cmath>

using namespace std;
#define maxn int(1e9 + 1)
ifstream fin("input.txt");
ofstream fout("ofput.txt");
using namespace std;
#define FOR(i,a,b) for (int i=a;i< b;i++)
#define ll long long
template <typename T> vector<T> read_v(int n) { vector<T> v(n);  FOR(i, 0, n) cin >> v[i];  return v; }
bool decrease(int a, int b) { return (a > b); }
struct pr { int f, s; };
struct tr { int f, s, t; };
bool comp(pr a, pr b) { return (a.f < b.f); }

bool compstr(string a, string b) { return (a + b < b + a); }
/*
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	cout << (2 & 2);
	return 0;
}*/
int n, k, a[17], b[5];
int main() {
	scanf("%d%d", &n, &k);
	while (n--) {
		for (int i = 1; i <= k; i++)scanf("%d", &b[i]);
		a[b[1] + b[2] * 2 + b[3] * 4 + b[4] * 8] = 1;
	}
	for (int i = 0; i <= (1 << k); i++)
		for (int j = 0; j <= (1 << k); j++)
			if (!(i&j) && a[i] && a[j]) { puts("YES"); return 0; }
	puts("NO");
	return 0;
}