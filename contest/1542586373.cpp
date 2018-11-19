#include<bits/stdc++.h>
using namespace std;
int main()
{
	const int W = 12 * 3600;
	ios::sync_with_stdio(0);cin.tie(0);
	int a[3], b[2];
	cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1];
	a[0] = (a[0] * (W/12) + a[1] * (W/12/60) + a[2]) % W;
	a[1] = (a[1] * (W/60) + a[2] * (W/60/60)) % W;
	a[2] = a[2] * (W/60) % W;
	b[0] = b[0] * (W/12) % W;
	b[1] = b[1] * (W/12) % W;
	sort(a,a+3);
	sort(b,b+2);
	/*
cerr << a[0]  << ' ' <<  a[1] << ' ' << a[2] << '\n';
cerr << b[0]  << ' ' <<  b[1]  << '\n';
*/
	for (int i = 0; i < 2; ++i)
		if (a[i] < b[0] && b[1] < a[i+1]) {
			cout << "YES\n";
			return 0;
		}
	if (a[2] < b[0] || (a[2] < b[1] && a[0] > b[0]) || b[1] < a[0]) {
		cout << "YES\n";
		return 0;
	}
	cout << "NO\n";
}
