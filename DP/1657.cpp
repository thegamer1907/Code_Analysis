#include <iostream>
#include <cstdlib>
#include <cstring>

const int MAX_LENGTH = 100000;

int main() {
	char str[131072], *p = NULL;
	std::cin >> str;

	if (
		(p = std::strstr(str, "AB")) != NULL && std::strstr(p + 2, "BA") != NULL
		||
		(p = std::strstr(str, "BA")) != NULL && std::strstr(p + 2, "AB") != NULL
		) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}

	//system("pause");
	return 0;
}