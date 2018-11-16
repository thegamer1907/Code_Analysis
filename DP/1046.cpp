#include <iostream>

int main()
{
	int n;
	int num[100];
	int a[100];
	std::cin >> n;

	int count = 0;
	for(int i = 0; i < n; ++i)
	{
		std::cin >> num[i];
		if(num[i] == 1)
		{
			a[i] = -1;
			++count;
		}
		else
		{
			a[i] = 1;
		}
	}

	int max = -2;  // less than -1 is ok
	int sum = 0;
	for(int i = 0; i < n; ++i)
	{
		sum += a[i];

		if(sum > max)
		{
			max = sum;
		}

		if(sum < 0)
		{
			sum = 0;
		}
	}

	std::cout << max + count << std::endl;

	return 0;
}