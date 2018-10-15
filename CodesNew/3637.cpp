#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n, m;
	int mi, mx;
	int ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	int st = a[n];
	for (int i = 1; i <= n; i++)
		ans += st - a[i];
	if (m <= ans)
		mi = st;
	else
		mi = st + (m - ans + n - 1) / n;
	mx = st + m;
	cout << mi << " " << mx << endl;
}