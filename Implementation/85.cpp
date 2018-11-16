#include <iostream>
#include <vector>
#define int long long
using namespace std;

int32_t main() {
	int n, a, b;
	cin >> n >> a >> b;
	int d = abs(b-a)+1;
	int l = 1;
	int final = 1;
	while ((1<<l) < d) ++l;
	while ((1<<final) < n) ++final;
	int ans = 0;
	int pow = 2;
	while (a != b) {
		a = a / pow + (bool)(a % pow);
		b = b / pow + (bool)(b % pow);
		// cout << a << " " << b << endl;
		pow = 2;
		ans++;
	}
	if (ans == final) {
		cout << "Final!";
	}
	else
		cout << ans;
	return 0;
}