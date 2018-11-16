#include <iostream>

int main()
{
	int n, x;
	char queue[50];

	std::cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		std::cin >> queue[i];
	}
	char b = 'B' ,  g ='G';
	while (x--)
	{

		for (int i = 0; i < n; i++)
		{
			if (b == queue[i])
			{
				if (g == queue[i + 1])
				{
					char temp = queue[i];
					queue[i] = queue[i + 1];
					queue[i + 1] = temp;

					i++;

				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << queue[i];
	}

	return 0;
}