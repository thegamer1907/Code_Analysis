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

const int MAX = 101;

int munhattan[MAX][MAX];

int main()
{
	BOOST;

	int n, m;
	
	cin >> n >> m;

	unordered_set <string> polandball;
	
	FOR(i, 0, n)
	{
		string temp;

		cin >> temp;

		polandball.insert(temp);
	}

	int poland = 0, enemy = 0, both = 0;

	FOR(i, 0, m)
	{
		string temp;

		cin >> temp;

		if (polandball.count(temp))
		{
			++both;
		}
		else
		{
			++enemy;
		}
	}

	poland = SIZE(polandball) - both;

	int temp = both / 2;

	enemy -= both - temp;

	poland -= temp;


	if (poland > enemy)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}