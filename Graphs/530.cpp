#include <iostream>
#include <string>

int main()
{
	int n,t;
	char boy = 'B';
	std::string INPUT;
	
	std::cin >> n >> t >> INPUT;
	
	for(int i = 0; i < t; i++)
	{
		for(int j = 0; j < n;j++)
		{
			if(INPUT[j] == boy && INPUT[j+1] != boy && j+1 <= INPUT.length()-1)
			{
				INPUT[j] = INPUT[j+1], INPUT[j+1] = boy;
				j++;
			}
		}
	}
	
	std::cout << INPUT;
	return 0;
}
