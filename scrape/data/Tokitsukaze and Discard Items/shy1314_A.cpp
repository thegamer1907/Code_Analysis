#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const __int64 NMAX = 1e18;
const __int64 MMAX = 1e5;
const __int64 MAX = 1e5 + 5;
__int64 n; int m; __int64 k;
__int64 a[MAX];
int main()
{
	//cout << ceil(0.5) << endl;

	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i++)
	{
		cin >> a[i];
	}
	__int64 pp = k, p2 = 1, num = 0, res = 0;
	while (p2 <= m)
	{
		if (a[p2] <= pp)
		{
			num++;
		}
		else if (a[p2] > pp)
		{
			if (num != 0)
			{
				res++;
			}
			pp += num;
			num = 0;
			pp += (a[p2] - pp) / k * k;
			if (pp < a[p2])pp += k;
			p2--;
		}
		p2++;
	}
	if (num != 0)res++;
	cout << res << endl;
}