#include <iostream>
#include <algorithm>

using namespace std;

const int M = 1e5 + 5;
const int64_t LINF = 1e18;

int64_t n, k, a[M];
int m;

int64_t Calc(int64_t x)
{
	return x / k + !!(x % k);
}

int main()
{
	//freopen("Text.txt", "r", stdin);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 1; i <= m; ++i)
		cin >> a[i];
	int ans = 0;
	int i = 1;
	int j = 1;
	int64_t sub = 0;
	while (i <= m)
	{
		j = i;
		int tmp = Calc(a[i] - sub);
		while (j <= m && Calc(a[j] - sub) == tmp)
			j++;
		ans++;
		sub += j - i;
		i = j;
	}
	cout << ans;
	return 0;
}