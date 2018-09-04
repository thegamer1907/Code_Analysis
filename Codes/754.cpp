#include <bits/stdc++.h>
#define N 11000000
#define endl "\n"

#define trace1(x)             	 cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;

using namespace std;

bool isSol (int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}

	return (sum == 10);
}

int main() {
	// for fast input output using cin cout
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	// size of array
	// input
	int n;
	cin >> n;
	int sz = 0;
	int ans;
	for (int i = 18; i < N; ++i) {
	 	if (isSol(i)) {
	 		sz++;
	 		ans = i;
	 	}
	 	if (sz == n)
	 		break;
	}

	cout << ans << endl;
	return 0;
}
