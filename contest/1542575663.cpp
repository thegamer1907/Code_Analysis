#include<cstdlib>
#include<cstdio>
#include<climits>
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include <stack>
#include<queue>
#include <exception>
#include <functional>
#include <bitset>
#include <iomanip>

typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE 
	FILE *file;
	file = new FILE;
	freopen_s(&file, "in.txt", "r", stdin);
#endif // !ONLINE_JUDGE
	double  h, m, s, t1, t2;
	vector<double> v(3);
	cin >> h >> m >> s >> t1 >> t2;
	h = (int)h % 12;
	t1 = (int)t1 % 12;
	t2 = (int)t2 % 12;
	v[0] = s / 60.0;
	v[1] = m / 60.0 + (v[0] / 60);
	v[2] = h / 12.0 + (v[1] / 12.0);
	t1 = t1 / 12.0;
	t2 = t2 / 12.0;
	//v[0] = h; v[1] = m; v[2] = s;
	if (t1 > t2)
		swap(t1, t2);
	bool b1 = true, b2 = true;
	for (size_t i = 0; i < 3; i++)
	{
		if (v[i] > t1 && v[i] < t2)
			b1 = false;
		if (v[i] > t2 || v[i] < t1)
			b2 = false;
	}
	if (!b1 && !b2)
	{
		cout << "NO";
		return 0;
	}
	cout << "YES";

}