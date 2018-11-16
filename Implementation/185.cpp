#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

typedef long long LL;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;
	if (b < a)
		swap(b, a);

	int k = 0, nn = n;
	while (nn != 1)
	{
		k++;
		nn /= 2;
	}

	int ans = 0;
	int m = n / 2;
	if (b > m && a <= m)
	{
		cout << "Final!";
		return 0;
	}
	while (!(b > m && a <= m))
	{
		if (b > m)
		{
			a -= m;
			b -= m;
		}
		n = m;
		ans++;
		m = n / 2;
	}

	cout << k - ans;
		

	return 0;	
}