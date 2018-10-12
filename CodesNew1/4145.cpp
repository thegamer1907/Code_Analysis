#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
#include <map>
#include <set>
#include <bitset>

#define INF 0x3f3f3f3f
#define memset0(x) memset(x, 0, sizeof(x))
#define memsetM1(x) memset(x, -1, sizeof(x))
#define memsetINF(x) memset(x, INF, sizeof(x))

using namespace std;

const int MAXN = 200005;

vector<long long> sums(MAXN);

int n, m;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		sums[i] = sums[i - 1] + num;
	}

	long long crt = 0;
	for (int i = 1; i <= m; i++)
	{
		long long arrow;
		cin >> arrow;

		crt += arrow;
		if (crt >= sums[n])
		{
			crt = 0;
		}

		cout << n + 1 - (upper_bound(sums.begin(), sums.begin() + n + 1, crt) - sums.begin()) << endl;
	}

	cin.get();
	cin.get();
	return 0;
}
