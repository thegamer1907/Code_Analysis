#include <bits/stdc++.h>

using namespace std;
using LL = long long;

struct node
{
	double deg;
	int type;
	
	node(double deg, int type) : deg(deg), type(type) {}
	
	bool operator<(const node &b) const
	{
		return deg < b.deg;
	}
};

int main()
{
	int h, m, s, t1, t2;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	if (h == 12) h = 0;
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	vector<node> v;
	v.emplace_back(360.0 / 60 * s, 0);
	v.emplace_back(360.0 / 3600 * (60 * m + s), 0);
	v.emplace_back(360.0 / (12 * 60 * 60) * (60 * 60 * h + 60 * m + s), 0);
	v.emplace_back(360.0 / 12 * t1, 1);
	v.emplace_back(360.0 / 12 * t2, 2);
	
	for (int i = 0; i < 5; i++)
	{
		node x = v[i];
		x.deg += 360;
		v.emplace_back(x);
	}
	sort(v.begin(), v.end());
	bool ok = 0;
	for (int i = 2; i < v.size(); i++)
	{
		if (v[i - 1].type && v[i].type && v[i - 1].type != v[i].type) ok = 1;
	}
	if (ok)puts("YES");
	else puts("NO");
	return 0;
}