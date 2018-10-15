#include <iostream>
#include <set>
using namespace std;

set <pair<long long, long long> > dat;
set <pair<long long, long long> >::iterator it;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long long i, n, q, a, t = 0, sum = 0;

	cin >> n >> q;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
		dat.insert({ sum, i });
	}

	for (i = 0; i < q; i++)
	{
		cin >> a;
		t += a;

		it = dat.upper_bound({ t, n+10 });

		if (it == dat.end())
		{
			t = 0;
			cout << n << "\n";
		}
		else
		{
			cout << n - it->second << "\n";
		}
	}

	return 0;
}