#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	a--, b--;

	int cnt = 0;
	while (n) {
		n >>= 1;
		cnt++;
	}
	//cout << cnt << '\n';
	cnt -= 2;
	int rem = cnt;
	while (cnt >= 0 && ((1 << cnt) & a) == ((1 << cnt) & b)) {
		//cout << a << ' ' << b << '\n';
		//cout << cnt << ' ' << ((1 << cnt) & a) << ' ' << ((1 << cnt) & b) << '\n';
		cnt--;
	}

	if (rem == cnt)
		cout << "Final!";
	else
		cout << cnt + 1;

	return 0;
}