#include <bits/stdc++.h>
#include <bitset>
using namespace std;

 int main()
{
	int n, t;
	cin >> n >> t;
	t--;
	vector <int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	int i = 0;
	while (i < t) i += v[i];
	if (i == t) cout << "YES";
	else cout << "NO";
}
 