#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>
#include<fstream>

using namespace std;
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it,a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a,value) memset(a, value, sizeof(a))

#define ALL(a) a.begin(),a.end()
#define SZ(a) (int)a.size()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<LL, LL> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 1000;
int C[MAX];

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	//ios::sync_with_stdio(false); cin.tie(0);
	int n, k;
	cin >> n >> k;
	FOR(i, 0, n)
	{
		int a = 0;
		FOR(j, 0, k)
		{
			int b;
			cin >> b;
			a *= 2;
			a += b;
		}

		C[a] = 1;
	}

	for (int mask = 1; mask < (1 << 16); mask++)
	{
		bool good = true;
		FOR(j, 0, 16)
		{
			if ((mask & (1 << j)) && !C[j])
			{
				good = false;
				break;
			}
		}

		if (!good) continue;
		int N[4] = {0};
		int cnt = 0;
		FOR(j, 0, 16)
		{
			if ((mask & (1 << j)))
			{
				cnt++;
				FOR(k1, 0, k)
				{
					if (j & (1 << k1))
					{
						N[k1]++;
					}
				}
			}
		}

		good = true;
		FOR(k1, 0, k)
		{
			if (N[k1] * 2 > cnt)
			{
				good = false;
				break;
			}
		}

		if (good)
		{
			//cout << mask << endl;
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
}