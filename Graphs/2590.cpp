#include <iostream>


int parent[10000];
int color[10000];


int main()
{
	std::ios::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int nodes; std::cin >> nodes;
	for (int i = 1; i < nodes; i++)
	{
		int p; std::cin >> p;
		parent[i] = p - 1;
	}

	int steps = 0;
	for (int i = 0; i < nodes; i++)
	{
		int c; std::cin >> c;
		steps += (color[parent[i]] != c);
		color[i] = c;
	}

	std::cout << steps << '\n';

	return 0;
}
