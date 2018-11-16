#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	/*if (b - a == 1 && a % 2 == 1)
	{
		cout << 1;
		return 0;
	}*/
	if (a > b)
		swap(a, b);
	int ac = (a + 1) / 2;
	int bc = (b + 1) / 2;
	int cnt = 1;
	while ((a + (1 << cnt) - 1) / (1 << cnt) != (b  + (1 << cnt) - 1) / (1 << cnt))
		cnt++;
	if (n == (1 << cnt))
	{
		cout << "Final!";
	}
	else
		cout << cnt;

	return 0;
}