#include<bits/stdc++.h>
using namespace std;

int main()
{
	int h, m, s, t1, t2;
	double a[4];
	
	cin >> h >> m >> s >> t1 >> t2;
	t2 %= 12; t1 %= 12;
	h %= 12, m %= 60, s %= 60;
	a[0] = (h * 3600 + m * 60 + s)*1.0 / 3600;
	a[1] = (m * 60 + s)*1.0 / 60 / 5;
	a[2] = s*1.0 / 5;
	int sta = 0;
	if (t1 > t2)swap(t1, t2);
	for (int i = 0; i < 3; i++)
	{
//		cout << a[i] << endl;
		if (t1 < a[i] && a[i] < t2)
			sta++;
	}
	sta %= 3;
	if (!sta)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}