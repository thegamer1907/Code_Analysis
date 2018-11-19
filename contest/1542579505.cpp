
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<vector>
#include<queue>
#include<deque>
#include <iomanip>
#include<bitset>
#include<functional>
#include<set>
using namespace std;
typedef long long ll;
const int MAXN = 1e5 + 10;
int n, k;
int a[5];
set<int> tq;
int main() {
	cin >> n >> k;
	bool ff = false;
	for (int i = 1; i <= n; ++i) {
		int res = 0;
		for (int j = 1; j <= k; ++j) {
			cin >> a[j];
			res = res * 2 + a[j];
		}
		int mask = (1 << k) - 1;
		int rev = res ^ mask;
		for (int m = 0; m < (1 << k) && !ff; ++m) {
			if (tq.find(rev ^ (rev&m)) != tq.end())ff = true;
		}
		tq.insert(res);
	}
	if (tq.find(0) != tq.end())ff = true;
	if (ff)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}