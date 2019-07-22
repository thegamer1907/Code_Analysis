#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace __gnu_pbds;
using namespace std;
const long long llINF = 9223372036854775807;
const int INF = 2147483647;
const int maxn = 2e5 + 7;
const int maxm = 6e6 + 7;
const long long mod = 1e9 + 7;

long long n, m, k;
long long p[maxn];

long long ans;
long long num;
long long tmp;
long long cur;
int main(int argc, char const *argv[])
{
	scanf("%lld%lld%lld", &n, &m, &k);
	for (int i = 1; i <= m; i++)
		scanf("%lld", &p[i]);

	cur = 1;

	for (int i = 1; i <= m; i++)
	{
		if (p[i] - num <= min(cur * k, n)) //能删
		{
			tmp++;
		}
		else //删之前的
		{
			if (tmp) //必须得有
			{
				num += tmp;
				ans++;
				tmp = 0;
			}

			if (p[i] - num > min(cur * k, n))
			{
				cur = (p[i] - num) % k == 0 ? (p[i] - num) / k : (p[i] - num) / k + 1;
			}
			i--;
		}
	}
	if (tmp) //必须得有
	{
		num += tmp;
		ans++;
		tmp = 0;
	}
	printf("%lld\n", ans);
	return 0;
}