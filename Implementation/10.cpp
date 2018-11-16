#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	int cnt = 0;
	while (a != b)
	{
		cnt++;
		if (a % 2 == 1)
			a++;
		if (b % 2 == 1)
			b++;
		a /= 2;
		b /= 2;
	}
	if (cnt == log2(n))
		cout << "Final!";
	else
		cout << cnt << endl;
	return 0;
}