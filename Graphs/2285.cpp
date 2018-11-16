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

const int MAX = 2001;
vector <vector <int> > graph;
int manager[MAX];
int depth[MAX];
int result = 1;

void DFS(int v)
{
	for (auto& u : graph[v])
	{
		if (!depth[u])
		{
			depth[u] = depth[v] + 1;
			result = max(result, depth[u]);
			DFS(u);
		}
	}
}

int main()
{
	BOOST;
	
	int n;

	cin >> n;

	graph.resize(n);

	FOR(i, 0, n)
	{
		cin >> manager[i];

		--manager[i];

		if (manager[i] >= 0)
		{
			graph[i].PB(manager[i]);
			graph[manager[i]].PB(i);
		}
	}

	FOR(i, 0, n)
	{
		if (!depth[i] && manager[i] < 0)
		{
			depth[i] = 1;
			DFS(i);
		}
	}

	cout << result;

	return 0;
}