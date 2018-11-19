#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define SZ 107

int OO = 1e9;

int main() {
	int h, m, s, a, b, i;
	cin >> h >> m >> s >> a >> b;
	m = (m * 12) / 60;
	s = (s * 12) / 60;
	if(m == 0) m= 12;
	if(s == 0) s= 12;
	if (a > b)
		swap(a, b);
	for (i = a; i < b; i++)
		if (i == h || i == m || i == s)
			break;
	if (i == b) {
		cout << "YES";
		return 0;
	}
	for (i = b; i <= 12; i++)
		if (i == h || i == m || i == s)
			break;
	if (i == 13) {
		for (i = 1; i < a; i++)
			if (i == h || i == m || i == s)
				break;
		if (i == a) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}