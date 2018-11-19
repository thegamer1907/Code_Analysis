#include <iostream>

using namespace std;

const int maxn = 110;

char cf [maxn], cs[maxn];

int main()
{
	int n;
	char c1, c2;
	cin >> c1 >> c2;
	cin >> n;
	bool c1c, c2c;
	c1c = false;
	c2c = false;
	char cbuf1, cbuf2;
	for (int i = 0; i < n; i++)
	{
		cin >> cbuf1 >> cbuf2;
		if (cbuf1 == c1 && cbuf2 == c2)
		{
			c1c = true;
			c2c = true;
		}
		if (cbuf2 == c1)
		{
			c1c = true;
		}
		if (cbuf1 == c2)
		{
			c2c = true;
		}
	}
	if (c1c && c2c)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}