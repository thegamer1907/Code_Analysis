#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	
	int n;
	std::cin >> n;
	std::cin.ignore(32767, '\n');
	bool flag1 = false, flag2 = false;
	for (int i = 0; i < n; ++i)
	{
		std::string str2;
		std::getline(std::cin, str2);
		
		if (str2 == str)
		{
			std::cout << "YES";
			return 0;
		}
		
		if (str2[0] == str[1])
		{
			flag2 = true;
		}
		if (str2[1] == str[0])
		{
			flag1 = true;
		}
		
		if (flag1 && flag2)
		{
			std::cout << "YES";
			return 0;
		}
	}
	
	std::cout << "NO";
}
