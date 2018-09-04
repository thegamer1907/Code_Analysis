#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#define ll long long
const ll INF = 999999999999999999;
const double PI = acos(-1.0);

void stop()
{
	//system("pause");
	exit(0);
}

ll f = 1;
ll A[50005];

int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios::sync_with_stdio(false);

	for (ll i1 = 1; i1 <= 9; i1++)
	{
		A[f] = i1 * 10;
		A[f] += 10 - i1;
		f++;
	}
	for (ll i1 = 1; i1 <= 9; i1++)
	{
		for (ll i2 = 0; i2 <= 9; i2++)
		{
			if (i1 + i2 <= 10)
			{
				A[f] = i1 * 100 + i2*10;
				A[f] += 10 - (i1+i2);
				f++;
			}
		}
	}
	for (ll i1 = 1; i1 <= 9; i1++)
	{
		for (ll i2 = 0; i2 <= 9; i2++)
		{
			for (ll i3 = 0; i3 <= 9; i3++)
			{
				if (i1 + i2 + i3 <= 10)
				{
					A[f] = i1 * 1000 + i2 * 100 + i3*10;
					A[f] += 10 - (i1 + i2 + i3);
					f++;
				}
			}
		}
	}
	for (ll i1 = 1; i1 <= 9; i1++)
	{
		for (ll i2 = 0; i2 <= 9; i2++)
		{
			for (ll i3 = 0; i3 <= 9; i3++)
			{
				for (ll i4 = 0; i4 <= 9; i4++)
				{
					if (i1 + i2 + i3 + i4 <= 10)
					{
						A[f] = i1 * 10000 + i2 * 1000 + i3 * 100 + i4*10;
						A[f] += 10 - (i1 + i2 + i3 + i4);
						f++;
					}
				}
			}
		}
	}
	for (ll i1 = 1; i1 <= 9; i1++)
	{
		for (ll i2 = 0; i2 <= 9; i2++)
		{
			for (ll i3 = 0; i3 <= 9; i3++)
			{
				for (ll i4 = 0; i4 <= 9; i4++)
				{
					for (ll i5 = 0; i5 <= 9; i5++)
					{
						if (i1 + i2 + i3 + i4 + i5 <= 10)
						{
							A[f] = i1 * 100000 + i2 * 10000 + i3 * 1000 + i4 * 100 + i5*10;
							A[f] += 10 - (i1 + i2 + i3 + i4 + i5);
							f++;
						}
					}
				}
			}
		}
	}
	for (ll i1 = 1; i1 <= 9; i1++)
	{
		for (ll i2 = 0; i2 <= 9; i2++)
		{
			for (ll i3 = 0; i3 <= 9; i3++)
			{
				for (ll i4 = 0; i4 <= 9; i4++)
				{
					for (ll i5 = 0; i5 <= 9; i5++)
					{
						for (ll i6 = 0; i6 <= 9; i6++)
						{
							if (i1 + i2 + i3 + i4 + i5 + i6 <= 10)
							{
								A[f] = i1 * 1000000 + i2 * 100000 + i3 * 10000 + i4 * 1000 + i5 * 100 + i6*10;
								A[f] += 10 - (i1 + i2 + i3 + i4 + i5 + i6);
								f++;
							}
						}
					}
				}
			}
		}
	}
	for (ll i1 = 1; i1 <= 9; i1++)
	{
		for (ll i2 = 0; i2 <= 9; i2++)
		{
			for (ll i3 = 0; i3 <= 9; i3++)
			{
				for (ll i4 = 0; i4 <= 9; i4++)
				{
					for (ll i5 = 0; i5 <= 9; i5++)
					{
						for (ll i6 = 0; i6 <= 9; i6++)
						{
							for (ll i7 = 0; i7 <= 9; i7++)
							{
								if (i1 + i2 + i3 + i4 + i5 + i6 + i7 <= 10)
								{
									A[f] = i1 * 10000000 + i2 * 1000000 + i3 * 100000 + i4 * 10000 + i5 * 1000 + i6 * 100 + i7*10;
									A[f] += 10 - (i1 + i2 + i3 + i4 + i5 + i6 + i7);
									f++;
								}
							}
						}
					}
				}
			}
		}
	}
	ll k;
	cin >> k;
	cout << A[k];

	stop();
}