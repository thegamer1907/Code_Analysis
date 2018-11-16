#include <bits/stdc++.h>
#include <windows.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif

	int n, a, b;
	cin >> n >> a >> b;
	a--, b--;

	int res = 0;
	while(a != b) {
		a /= 2;
		b /= 2;
		res++;
	}

	int st = -1;
	while(n) {
		st++;
		n >>= 1;
	}

	if(res == st)
		cout << "Final!";
	else
		cout << res;
}
