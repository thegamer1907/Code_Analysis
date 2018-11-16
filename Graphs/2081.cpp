#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <fstream>
#include <stack>
#include <ctime>
#include <memory.h>
#define all(x) x.begin(), x.end()
#define rev_all(x) x.rbegin(), x.rend()
#define nline '\n'
typedef long long ll;
const ll MOD = 1000000007;
const double ZER = 1e-9;
const double PI = acos(-1);
using namespace std;
const int N = 1e5;
int n, m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("test.txt", "r", stdin);
#endif
	cin >> n >> m;
	int mp[N + 1];
	memset(mp, -1, sizeof(mp));
	queue<int> q;
	q.push(n);
	mp[n] = 0;
	while (!q.empty()) {
		int f = q.front();
		q.pop();
		if (f == m) {
			cout << mp[f] << endl;
			return 0;
		}
		if (mp[f - 1] == -1) {
			mp[f - 1] = mp[f] + 1;
			q.push(f - 1);
		}
		if (f * 2 <= 1e5)
			if (mp[f * 2] == -1) {
				mp[f * 2] = mp[f] + 1;
				q.push(f * 2);
			}
	}
	return 0;
}