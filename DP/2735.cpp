#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
using namespace std;

const int N = 1000001;
int a[N];
int b[N], b1[N];
int c[N], c1[N];
int g[N];
string s[N];
map<string, string> dict;

int main() {
	ios::sync_with_stdio(false);
	cin >> a[0];
	int ans = a[0] / 100;
	a[0] %= 100;
	ans += a[0] / 20;
	a[0] %= 20;
	ans += a[0] / 10;
	a[0] %= 10;
	ans += a[0] / 5;
	a[0] %= 5;
	ans += a[0];
	cout << ans;
	return 0;
}