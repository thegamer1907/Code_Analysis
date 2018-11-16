#include<bits/stdc++.h>
using namespace std;



int main() {

	int n;
	cin >> n;

	map<int, int> items;

	for (int i = 0; i < n; i++)
	{
		int item;
		cin >> item;
		items[item]++;
	}

	int m;
	cin >> m;

	int count = 0;

	vector<int> it;

	for (int i = 0; i < m; i++)
	{
		int item;
		cin >> item;
		it.push_back(item);
	}

	sort(it.begin(), it.end());

	for (int i = 0; i < m; i++)
	{

		for (int k = it[i] - 1; k <= it[i] + 1; k++)
		{
			if (items.count(k) > 0 && items[k] > 0) {
				count++;
				items[k]--;
				break;
			}
		}
	}

	cout << count << endl;

	int pause;
	cin >> pause;

	return 0;
}