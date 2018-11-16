#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;

	int counterone = 0, maxcount = -1, counter = 0;
	
	while (n--)
	{
		int i; cin >> i;
		if (i)
		{
			++counterone;
			if (counter)
			{
				--counter;
			}
		}
		else
		{
			++counter;
			maxcount = max(maxcount, counter);
		}
	}

	cout << counterone + maxcount;

	return 0;
}

