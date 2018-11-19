#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int h, m, s, t1, t2;
	int part[3];
	cin >> h >> m >> s >> t1 >> t2;
	if (h == 12) h = 0;
	part[0] = h * 3600 + m * 60 + s;
	part[1] = m * 720 + s * 12;
	part[2] = s * 720;

	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	t1 *= 3600; t2 *= 3600;

	for (int i = 0; i < 2;i++)
	{
		for (int j = i; j < 3;j++)
		{
			if (part[i] > part[j])
				swap(part[i], part[j]);
		}
	}

	int p1 = 0, p2 = 0;
	if (t1 > part[0]) 
		p1++;
	if (t1 > part[1])
		p1++;
	if (t1 > part[2])
		p1++;
	if (t2 > part[0])
		p2++;
	if (t2 > part[1])
		p2++;
	if (t2 > part[2])
		p2++;
	
	if (p1%3 == p2%3) cout << "YES";
	else cout << "NO";
}