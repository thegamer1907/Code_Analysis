#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
map<int, ll>mp[2];
int main()
{
// 	freopen("in.txt", "r", stdin);
	int n, k, a;
	ll ans = 0;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a);
		if (a%(k*k) == 0)
			ans += mp[1][a / k];
		if (a%k == 0)
			mp[1][a] += mp[0][a / k];
		++mp[0][a];
	}
	cout << ans;
	return 0;
}