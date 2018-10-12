#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <ctime>

using namespace std;

typedef long long ll;
typedef long double ld;

const ll INF = (ll)1 << 61;

int main()
{
	ll n, m;
	cin >> n >> m;
	vector <ll> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll emptyness = 0;
	for(int i = 0; i < n; ++i)
	{
		emptyness += v[n - 1] - v[i];
	}
	if (m <= emptyness)
	{
		cout << v[n - 1] << " ";
	}
	else
	{
		cout << max(v[n - 1], ((m - emptyness) / n) + ((m - emptyness) % n != 0) + v[n - 1]) << " ";
	}
	cout << v[n - 1] + m;
	return 0;
}