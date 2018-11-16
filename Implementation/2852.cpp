#include <iostream>

using namespace std;

int bp(int a, int n)
{
	int res = 1;
	while (n) {
		if (n & 1) res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int l = 1, r = b;
	while (l < r)
	{
		int m = (l + r) / 2;
		if (a*bp(3, m)>b*bp(2, m)) {
			r=m;
		}
		else
		{
			l=m+1;
		}
	}
	cout << r;

	return 0;
}