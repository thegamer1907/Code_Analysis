# include <iostream>
# include <algorithm>

using namespace std;

typedef long long LL;
const int maxn = 1e5 + 5;
LL F[maxn], dx;

int main()
{
	LL n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
		cin >> F[i];
	LL cnt = 0, last = -1, res = 0;
	for (int i = 0; i < m; i++) {
		LL t = (F[i] - dx - 1) / k;
		if (last == -1 || last == t) {
			cnt++;
			last = t;
			if (i + 1 == m)
				res++;
		}
		else {
			res++;
			dx += cnt;
			cnt = 0;
			last = -1;
			i--;
		}
	}
	cout << res << endl;
	return 0;
}