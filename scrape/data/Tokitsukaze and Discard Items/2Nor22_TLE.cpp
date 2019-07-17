#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstdint>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <deque>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
#define pb push_back
#define m_p make_pair
#define fr first
#define sc second
#define endl '\n'
ll const N = 1e6 + 5, mod = 1e9 + 7;
ll n, m, k, i, j, kaskad[N], ans;
char arr[3] = { 'm', 'p', 's' };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m >> k;
	for (i = 0; i < m; ++i)
	{
		cin >> kaskad[i];
	}
	ll eras = 0, x = 0;
	for (i = 0; i < m; ++i)
	{
		ll count = 0;
		while (i < m && kaskad[i] - eras > x * k && kaskad[i] - eras <= (x + 1) * k)
		{
			count++;
			i++;
		}
		//cout << count << endl;
		eras += count;
		i--;
		if (count == 0)
		{
			x++;
		}
		else
			ans++;
	}
	cout << ans << endl;
	return 0;
}