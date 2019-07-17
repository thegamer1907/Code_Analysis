#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
const __int64 NMAX = 1e18;
const __int64 MMAX = 1e5;
const __int64 MAX = 1e5 + 5;
__int64 n; int m; __int64 k;
__int64 a[MAX];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i++)
	{
		cin >> a[i];
	}
	__int64 pp = k, p1 = 1, p2 = 1, num = 0, res = 0;
	while (p1 <= n && p2 <= m)
	{
		if (p1 == a[p2]) { num++; p2++; }
		if (p1 == pp && num != 0)
		{
			pp += num;
			num = 0;
			res++;
		}
		else if (p1 == pp)
		{
			pp += k;
		}
		p1 = min(a[p2], pp);
	}
	if (num != 0)res++;
	cout << res << endl;
}