#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#include <vector>
#include <math.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int n;
int a[100001];
int ans = 2e9, res;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (ans > ((a[i] - i + n - 1) / n)*n + i) {
			ans = ((a[i] - i + n - 1) / n)*n + i;
			res = i;
		}
	}
	cout << res + 1;
	return 0;
}