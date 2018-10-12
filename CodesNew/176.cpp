#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
#include <map>
#include <deque>
#include <list>
#include <fstream>
#include <limits.h>
#include <numeric>

using namespace std;

#define pint pair <int, int> 
#define F first
#define S second
#define PI 3.141592653589793
#define LL long long
#define RPQ priority_queue<LL, vector<LL>, std::greater<LL> >
#define puf push_front
#define pub push_back
#define pob pop_back
#define pof pop_front
#define MP make_pair
#define mod (LL)(1e5)
#define inf int(1e9)
#define M int(1e5 + 10)

int ary[M], bry[M];

int main() {
	std::ios::sync_with_stdio(false);

	int n, t; cin >> n >> t;
	for (int i = 1; i <= n; i++) {
		cin >> ary[i];
		bry[i] = ary[i] + bry[i - 1];
	}

	int l, r, ans; l = 0; r = 1; ans = 0;
	for (; r <= n; r++) {
		while (l <= r && bry[r] - bry[l] > t) l++;
		if (l <= r) ans = max(ans, r - l);
	}
	cout << ans << endl;

	return 0;
}
