#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <math.h>
#include <functional>
#include <unordered_map>
#include <map>

using namespace std;

typedef long long ll;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	t1 *= 30;
	t2 *= 30;
	t1 %= 360;
	t2 %= 360;
	h *= 5;
	h %= 60;
	vector<double> a(3);
	a[0] = h * 6;
	a[1] = m * 6;
	a[2] = s * 6;
	a[1] += a[2] / 60;
	a[0] += a[1] / 60;
	sort(a.begin(), a.end());
	a.push_back(a[0] + 360);
	bool f = false;
	for (int i = 0; i < 3; i++)
	{
		if (t1 >= a[i] && t1 <= a[i + 1] && t2 >= a[i] && t2 <= a[i + 1])
			f = true;
		t1 += 360;
		if (t1 >= a[i] && t1 <= a[i + 1] && t2 >= a[i] && t2 <= a[i + 1])
			f = true;
		t1 -= 360;
		t2 += 360;
		if (t1 >= a[i] && t1 <= a[i + 1] && t2 >= a[i] && t2 <= a[i + 1])
			f = true;
		t1 += 360;
		if (t1 >= a[i] && t1 <= a[i + 1] && t2 >= a[i] && t2 <= a[i + 1])
			f = true;
		t1 -= 360;
		t2 -= 360;
	}
	if (f)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}