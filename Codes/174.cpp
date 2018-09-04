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
#include <intrin.h>
#include <cstdint>
#include <unordered_map>
#include <unordered_set>
#include <cassert>
#include <deque>
#include <numeric>
#include <stack>
#pragma comment(linker, "/STACK:100000000") 
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long uld;

int main()
{
#ifdef LOCAL_FREOPEN
	freopen("input.txt", "rt", stdin);
	//freopen ("output.txt", "wt", stdout); 
#endif
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	vector<int> v(n);
	for (auto&i : v)cin >> i;
	for (size_t i = 0; i < n; i++)
		v[i] += i == 0 ? 0 : v[i - 1];
	int m; cin >> m;
	while (m--)
	{
		int q; cin >> q;
		cout << lower_bound(v.begin(), v.end(), q) - v.begin() + 1 << endl;
	}
	return 0;
}