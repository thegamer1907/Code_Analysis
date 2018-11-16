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

void stop()
{
	//system("pause");
	exit(0);
}



int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios::sync_with_stdio (false);

	ll n;
	cin >> n;
	ll a, maxi = 0, pr=0, curr=0;
	for (ll i = 0; i < n; i++)
	{
		cin >> a;
		if (a > pr) curr++;
		else
		{
			if (curr > maxi)
			{
				maxi = curr;
			}
			curr = 1;
		}
		pr = a;
	}
	if (curr > maxi)
	{
		maxi = curr;
	}
	cout << maxi;

	stop();
}