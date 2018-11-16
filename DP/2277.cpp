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
const ll INF = 9999999999999999;
const double PI = acos(-1);

ll A[100005];
ll B[100005];
ll C[100005];

int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios::sync_with_stdio (false);

	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	B[A[n - 1]]++;
	C[n - 1] = 1;
	for (ll i = n - 2; i >= 0; i--)
	{
		if (B[A[i]] == 0)
		{
			C[i] = C[i + 1] + 1;
		}
		else
		{
			C[i] = C[i + 1];
		}
		B[A[i]]++;
	}
	ll a;
	for (ll i = 0; i < m; i++)
	{
		cin >> a;
		cout << C[a - 1] << endl;
	}

	//system("pause");
	return 0;
}