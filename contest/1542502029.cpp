#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

int main(int argc, const char * argv[])
{
	std::string password;
	std::getline(std::cin, password);

	std::string countStr;
	std::getline(std::cin, countStr);

	std::vector<std::string> words;
	std::string v;
	while (std::getline(std::cin, v))
		words.emplace_back(v);

	if (!words.empty() && words.size() == 1)
		words.push_back(words.front());

	const auto printResult = [](bool value) { std::cout << (value ? "YES" : "NO") << std::endl; };
	bool isSuccess = false;

	std::unordered_set<char> front;
	std::unordered_set<char> reverse;
	for (auto const& w : words)
	{
		front.emplace(w.front());
		reverse.emplace(w.back());
	}
	bool isFinded = std::find(words.begin(), words.end(), password) != words.end();
	isSuccess = isFinded || (reverse.find(password.front()) != reverse.end() && front.find(password.back()) != front.end());
	printResult(isSuccess);

	return 0;
}
