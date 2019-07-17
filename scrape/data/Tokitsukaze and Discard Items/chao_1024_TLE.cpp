# include <iostream>
# include <algorithm>

using namespace std;

typedef long long LL;
const int maxn = 1e5 + 5;
int F[maxn], dx;

int main()
{
	LL n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
		cin >> F[i];
	sort(F, F + m);
	int cnt = 0, res = 0;
	for (int i = 0; i < m; i++) {
		if (F[i] - dx <= k) {
			cnt++;
			if (i + 1 == m)
				res++;
			continue;
		}
		if (cnt)
			res++;
		dx += cnt;
		cnt = 0;
		if (F[i] - dx > k)
			dx += k;
		i--;
	}
	cout << res << endl;
	return 0;
}