#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <climits>

#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

using namespace std;

const int INF = 1e9 + 20;


int main()
{
	//freopen("path.in", "rt", stdin);
	//freopen("path.out", "wt", stdout);
	speed;
	
	int n, t;
	cin >> n >> t;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int l = 0, r = 0;
	int s = a[0];
	int ans = 0, m = 0;
	while (r < n - 1)
	{
		if (a[r + 1] > t) {
			r += 2;
			l = r;
			if (l < n) s = a[l]; else s = 0;
		} else
		if (s + a[r + 1] > t)
		{
			s -= a[l];
			l++;
		}
		else
		{
			s += a[r + 1];
			r++;
		}
		if (s <= t && s)
		ans = max(ans, r - l + 1);
	}
	if (n == 1 && a[0] <= t) ans = 1;
	cout << ans;
	return 0;
}