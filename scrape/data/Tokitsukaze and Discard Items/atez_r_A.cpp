#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <tuple>
#include <set>
#include <map>
#include <functional>
#include <cmath>
#include <cstring>
using namespace std;
#define sci(n) scanf("%lld", &(n))
#define scd(n) scanf("%Ld", &(n))
typedef long long ll;
int main(void)
{
	ll n, m, k, ans = 0, x = 1, g_cnt;
	ll arr[100000];

	cin >> n >> m >> k;

	for (int i = 0; i < m; i++)
		cin >> arr[i];

	for (int i = 0; i < m; i += g_cnt) {
		ans++;
		g_cnt = 1;

		for (int j = i + 1; j < m; j++) {
			if ((arr[i] - x) / k == (arr[j] - x) / k)
				g_cnt++;
			else
				break;
		}

		x += g_cnt;
	}

	cout << ans << "\n";
}