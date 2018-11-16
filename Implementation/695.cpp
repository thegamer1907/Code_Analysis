#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <functional>
#include <set>
#include <algorithm>
#define pii pair<int, int>
#define ll long long
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	int n, k;
	scanf("%d %d", &n, &k);
	int a[50];
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	sort(a, a + n, greater<int>());
	k--;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= a[k] && a[i] > 0) ans++;
	}
	printf("%d", ans);
	return 0;
}