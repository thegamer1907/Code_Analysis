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
pair<int, int> arr[100001];

int main() {
	int a,b; cin >> a >> b;
	int64_t res = 1;
	a = min(a,b);
	for(int i=2;i<=a;++i)
		res*=i;
	cout << res;
	return 0;
}