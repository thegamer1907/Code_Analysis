#include <bits/stdc++.h>

using namespace std;

const int N = 1234567;

string a[N];

int main() 
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		cin >> a[i];
	}
	sort(a, a + n + m);
	int both = 0;
	for (int i = 0; i < n + m - 1; i++) {
		if (a[i] == a[i + 1]) {
			both++;
		}
	}
	if (n > m) cout << "YES";
	else if (n < m) cout << "NO";
	else if (both % 2 == 1) cout << "YES";
	else cout << "NO";
	return 0;
}
