#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<char> order;
	char x;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		order.push_back(x);
	}

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < order.size() - 1; j++)
		{
			if (order[j] == 'B' && order[j + 1] == 'G') {
				order[j] = 'G';
				order[j + 1] = 'B';
				j++;
			}
			else {
				continue;
			}
		}
	}
	for (int i = 0; i < order.size(); i++)
	{
		cout << order[i];
	}

}
