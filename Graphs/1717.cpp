//Michal Maras
//Who enters to my domain?
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <bitset>
#include <vector>
#include <random>
#include <queue>
#include <deque>
#include <stack>
#include <cmath>
#include <ctime>
#include <list>
#include <set>
#include <map>

#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define SIZE(x) (int)(x.size())
#define MP(x, y) make_pair(x, y)
#define PB(x) push_back(x)
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)

typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef unsigned int UINT;

#define INF 2000000007
#define LLINF 2000000000000000007

using namespace std;

const int MAX = 40001;
int a[MAX];

int main()
{
	BOOST;

	int n, k;

	cin >> n >> k;

	FOR(i, 0, n - 1)
	{
		cin >> a[i];
	}

	int id = 0;

	--k;

	while (id < k)
	{
		id = id + a[id];

		if (id == k)
		{
			cout << "YES\n";
			return 0;
		}
	}

	cout << "NO\n";

	return 0;
}