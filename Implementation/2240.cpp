#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, k, w, p;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> k >> n >> w;
	p = k * w * (w + 1) / 2;
	if (p <= n)
		cout << 0 << endl;
	else
		cout << p - n;
	return 0;
}
