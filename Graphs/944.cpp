#include <iostream>

using namespace std;

int main()
{
	int n, t, a[30002], next = 1;

	cin >> n >> t;

	for (int i = 1; i < n; i++)
		cin >> a[i];

	while (true)
	{
		if (next > t)
		{
			cout << "NO" << endl;

			return 0;
		}

		if (next == t)
		{
			cout << "YES" << endl;

			return 0;
		}

		next = next + a[next];
	}
	
	return 0;
}