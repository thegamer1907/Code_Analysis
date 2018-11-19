#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e2 + 10;
const int inf = 0x3f3f3f3f;

double a[3];
int main()
{
	double h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	if(t1 == 12) t1 -= 12;
	if(t2 == 12) t2 -= 12;
	if(h == 12) h -= 12;
	m += s / 60, h += m / 60;
	t1 *= 30, t2 *= 30;
	a[0] = h * 30, a[1] = m * 6, a[2] = s * 6;
	for(int i = 0; i < 3; i++)
		if(a[i] >= 360)
			a[i] -= 360;
	sort(a, a + 3);
	bool ans = 0;
	if(a[0] <= t1 && t1 <= a[1] && a[0] <= t2 && t2 <= a[1])
		ans = 1;
	else if(a[1] <= t1 && t1 <= a[2] && a[1] <= t2 && t2 <= a[2])
		ans = 1;
	else if(a[2] <= t1 && t1 <= 360 && a[2] <= t2 && t2 <= 360)
		ans = 1;
	else if(0 <= t1 && t1 <= a[0] && t2 >= 0 && t2 <= a[0])
		ans = 1;
	else if(0 <= t1 && t1 <= a[0] && a[2] <= t2 && t2 <= 360)
		ans = 1;
	else if(a[2] <= t1 && t1 <= 360 && t2 >= 0 && t2 <= a[0])
		ans = 1;
	
	cout << (ans ? "YES" : "NO") << endl;	

	return 0;
}