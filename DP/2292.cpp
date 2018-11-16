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
using namespace std;
typedef long long ll;
typedef long double ld;

int n, m;
int main() 
{
#ifdef LOCAL_FREOPEN
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	vector<int> v(n), sf(n);
	for (auto&i : v)cin >> i;
	set<int> st;
	for (int i = 0; i < n; i++)
	{
		st.insert(v[n - i - 1]);
		sf[n - i - 1] = st.size();
	}
	while (m--)
	{
		int x; cin >> x;
		cout << sf[x-1] << endl;
	}
	return 0;
}