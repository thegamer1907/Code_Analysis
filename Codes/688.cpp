//919B
#include <iostream>

using namespace std;

int k,i;
long a;

bool ok(long a)
{
	long t=a;
	int ans = 0;

	while (t > 0 && ans < 10)
	{
		ans += t%10;
		t /= 10;
	}

	if (ans == 10 && t == 0)
		return true;
	else
		return false;
}

int main()
{
	cin >> k;

	while (i < k)
	{
		++a;

		while ( !ok(a) )
			++a;

		++i;
	}

	cout << a;

	getchar();getchar();
	return 0;
}