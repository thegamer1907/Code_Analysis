#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int array[16] = { 0 }, temp = 0, p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		temp = p;
		for (int j = 1; j < k; j++)
		{
			
			temp = temp << 1;
			cin >> p;
			temp += p;

		}
		array[temp]++;
	}
	if (k == 1)
	{
		if (array[0] == 0)
			cout << "NO";
		else
			cout << "YES";
	}
	else if (k == 2)
	{
		if (array[0] != 0 || (array[1] != 0 && array[2] != 0))
			cout << "YES";
		else
			cout << "NO";

	}
	else if (k == 3)
	{
		if (array[0] != 0 || (array[1] != 0 && array[2] != 0) || (array[1] != 0 && array[4] != 0) || (array[1] != 0 && array[6] != 0) || (array[2] != 0 && array[4] != 0) || (array[2] != 0 && array[5] != 0) || (array[4] != 0 && array[3] != 0))
			cout << "YES";
		else
			cout << "NO";

	}
	else
	{
		if (array[0] != 0 || (array[9] != 0 && array[6] != 0) || (array[10] != 0 && array[5] != 0) || (array[12] != 0 && array[3] != 0))
		{
			cout << "YES";
			return 0;
		}
		if (array[1] != 0)
		{
			for (int i = 1; i < 16; i++)
			{
				if (i % 2 == 0 && array[i] != 0)
				{
					cout << "YES";
					return 0;
				}

			}

		}
		if (array[2] != 0)
		{
			for (int i = 1; i < 16; i++)
			{
				if ((i >> 1) % 2 == 0 && array[i] != 0)
				{
					cout << "YES";
					return 0;
				}

			}

		}
		if (array[4] != 0)
		{
			for (int i = 1; i < 16; i++)
			{
				if ((i >> 2) % 2 == 0 && array[i] != 0)
				{
					cout << "YES";
					return 0;
				}

			}

		}
		if (array[8] != 0)
		{
			for (int i = 1; i < 16; i++)
			{
				if ((i >> 3) % 2 == 0 && array[i] != 0)
				{
					cout << "YES";
					return 0;
				}

			}

		}
			cout << "NO";

	}

}

