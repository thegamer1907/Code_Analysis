
//

#include <iostream>

using namespace std;

int main()
{
	int n, t, i = 0;
	cin >> n >> t;

	string queue;
	cin >> queue;

	while (t > 0)
	{
		for (int i = 0; i <= n - 2; i++)
		{
			if (queue[i] < queue[i + 1])
			{
				swap(queue[i], queue[i + 1]);
				i++;
			}
		}

		t--;
	}

	cout << queue << endl;

	return 0;
}