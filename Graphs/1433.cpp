#include <fstream>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>

using i64 = long long;
using u64 = unsigned long long;

int main()
{
	using std::cin;
	using std::cout;

	std::ios_base::sync_with_stdio(false);

	size_t n, t;
	std::vector<size_t> offset;

	cin >> n >> t;

	--t;

	for (size_t i = 0; i < n - 1; ++i)
	{
		size_t a;
		cin >> a;
		offset.push_back(a);
	}

	offset.push_back(0);

	std::vector<bool> been = std::vector<bool>(n, false);
	std::queue<size_t> next;
	next.push(0);

	while (!next.empty())
	{
		auto cur = next.front();
		next.pop();

		if (!been[cur])
		{
			next.push(cur + offset[cur]);
		}

		been[cur] = true;
	}

	if (been[t])
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

    return 0;
}