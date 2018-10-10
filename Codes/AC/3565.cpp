#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <functional>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define fori(n) for (int i = 0; i < n;i ++)
using namespace std;

typedef long long ll;

const int INF = 200002;
const int MAXN = 300002;

struct Node
{
	Node * outcome;
	int color;
	int comp;
	bool in_cycle;
	bool used;
	long long value;
	long long answer;
};

int n, m, k;

ll first_type[MAXN][2];
ll second_type[MAXN][2];
ll after_first[MAXN][2];


bool check(int index, int j)
{
	return (after_first[index][1] >= second_type[j][1]);
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);

	cin >> n >> m >> k;
	int x, s;
	cin >> x >> s;

	for (int j = 0; j < 2; j++)
	{
		fori(m)
			cin >> first_type[i][j];
	}

	for (int j = 0; j < 2; j++)
	{
		fori(k)
			cin >> second_type[i][j];
	}

	after_first[0][0] = x;
	after_first[0][1] = s;

	for (int i = 1; i <= m; i++)
	{
		after_first[i][0] = first_type[i - 1][0];
		after_first[i][1] = s - first_type[i - 1][1];
	}

	long long answer = after_first[0][0] * n;

	second_type[k][0] = 1e10;
	second_type[k][1] = 1e10;

	for (int i = 0; i <= m; i++)
	{
		if (after_first[i][1] < 0)
			continue;

		long long l = -1;

		long long r = k + 1;


		while (r - l > 1)
		{
			auto mid = (l + r) >> 1;
			if (check(i, mid))
			{
				l = mid;
			}
			else
			{
				r = mid;
			}
		}
		long long delta = (l == -1 ? 0 : second_type[l][0]);
		answer = min(answer, (n - delta) * after_first[i][0]);
	}

	cout << answer;

	return 0;
}