//#define test 1

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

inline void prep()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
#ifdef test
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	prep();
	int n, a, b;
	cin >> n >> a >> b;
	--a;
	--b;

	int r = 8;
	while (
			(a & (1 << r)) == (b & (1 << r))
		)
	{
		--r;
	}
	++r;

	if (n > (1 << r))
	{
		cout << r;
	}
	else
	{
		cout << "Final!";
	}

	return 0;
}