#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define SZ 107

int OO = 1e9;

int main() {
	string x, t;
	int n, f = 0, s = 0, to = 0;
	cin >> x >> n;
	while (n--) {
		cin >> t;
		if (t == x)
			to = 1;
		if (t[0] == x[1])
			s = 1;
		if (t[1] == x[0])
			f = 1;
	}
	if(to || (s&&f))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
