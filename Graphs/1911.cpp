#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <ctime>
#include <set>
#include <map>
#define pb push_back
#define mp make_pair
#define ppb pop_back
#define f first
#define s second
#define ll long long

using namespace std;

const int N = 1e5 + 123;
const int inf = 1e9;

int n, m, a[105], b[105], cnt;

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (abs(a[i] - b[j]) <= 1) {
				b[j] = 10000;
				cnt++;
				break;
			}
		}
	}

	cout << cnt;
	return 0;
}











