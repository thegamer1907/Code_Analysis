#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int bp(int a, int b) {
	int res = 1;
	while (b)
	{
		if (b & 1)res *= a;
		a *= a;
		a %= 10;
		res %= 10;
		b >>= 1;
	}
	return res;
}

int main() {
	int a, b; cin >> a >> b;
	if(a==b && b==1) cout << 0;
	else
	cout << a + b - 2 - (abs(a-b) % 3 == 0 ? 1 : 0);

	return 0;
}