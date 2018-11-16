#include <bits/stdc++.h>

using namespace std;

int a[123];

int main()
{

		int n;
		cin >> n;

		for (int i = 1; i <= n; ++i) {
			int x;
			cin >> x;
			a[x] = i;
		}

		for (int i = 1; i <= n; ++i)
			cout << a[i] << ' ';

}