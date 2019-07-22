#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <deque>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <queue>
#include <unordered_set>
#include <iomanip>

typedef long long ll;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n, m, k;
	cin >> n >> m >> k;

	vector<long long> v(m);
	for (int i = 0; i < m; ++i)
		cin >> v[i];

	long long pagelast = min(n, k);

	long long ans = 0;

	for (int i = 0; i < v.size(); ++i)
	{
		long long lowcount = 0;
		while (i < v.size() && v[i] <= pagelast)
		{
			++i;
			++lowcount;
		}

		if (lowcount == 0)
		{
			pagelast += k;
			pagelast = min(pagelast, n);
			--i;
			continue;
		}
		else
		{
			--i;
			pagelast += lowcount;
			++ans;
		}
	}

	cout << ans << endl;
	return 0;
}