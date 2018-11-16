#include <vector>
#include <map>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <set>
#include <functional>
#include <iterator>
#include <random>
#include <list>
#include <queue>
#include <cstdlib>
#include <string>
#include <memory.h>
#include <cstdint>
#include <unordered_map>
#include <unordered_set>
#include <cassert>
#include <deque>
#include <numeric>
#include <stack>
using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
#ifdef LOCAL_FREOPEN
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	vector<int> s;
	while (n--)
	{
		int x; cin >> x;
		s.emplace_back(x);
	}
	int cur = 0;
	int ans = 0;
	int lst = 0;
	for (auto&i : s)
	{
		if (i <= lst) cur = 0;
		cur++;
		lst = i;
		ans = max(cur, ans);
	}
	cout << ans;
	return 0;
}
