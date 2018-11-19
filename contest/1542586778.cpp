#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	t1 %= 12;
	t2 %= 12;

	if (t1 > t2)
	{
		swap(t1, t2);
	}
	int d[12];
	memset(d, 0, sizeof(d));
	d[h % 12] = 1;
	d[(m % 60) / 5] = 1;
	d[(s % 60) / 5] = 1;


	bool f1 = true, f2 = true;
	for (int i = t1; i != t2; i = (i + 1) % 12)
	{
//		printf("i = %d ", i);
		if (d[i])
		{
			f1 = false;
		}
	}

//	puts("");
	for (int i = (t1 + 11) % 12; i != (t2 + 11) % 12; i = (i + 11) % 12)
	{
//		printf("i = %d ", i);
		if (d[i])
		{
			f2 = false;
		}
	}

	if (f1 || f2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}