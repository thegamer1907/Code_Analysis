#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector <long long> dat;
multiset <long long> rz;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long long n, i, a, b, k;
	long long p = 0, np = 0;

	cin >> n >> b;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		dat.push_back(a);
	}

	for (i = 0; i < n - 1; i++)
	{
		if (dat[i] % 2 == 0)
		{
			p++;
		}
		else
		{
			np++;
		}

		if (p == np)
		{
			rz.insert(abs(dat[i] - dat[i + 1]));
		}
	}

	k = 0;
	for (auto it : rz)
	{
		if (it <= b)
		{
			k++;
			b -= it;
		}
		else
		{
			break;
		}
	}

	cout << k;

	return 0;
}