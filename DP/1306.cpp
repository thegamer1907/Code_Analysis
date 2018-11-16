#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int initialOnesCount{0};
	int n;
	vector<int> data;
	vector<vector<int>> c;

	cin >> n;
	c.assign(n, vector<int>());
	for (auto &vec : c)
		vec.assign(n, 0);

	for (int i = 0; i < n; ++i)
	{
		int cur;
		cin >> cur;
		data.push_back(cur);
		if (cur)
			++initialOnesCount;
	}

	int res = -1;

	// calc diag items
	for (int i = 0; i < n; ++i)
	{
		if (data[i])
			c[i][i] = initialOnesCount - 1;
		else
			c[i][i] = initialOnesCount + 1;

		if (res < c[i][i])
			res = c[i][i];
	}

	// calc other items
	for (int j = n - 1; j >= 1; --j)
	{
		for (int i = j - 1; i >= 0; --i)
		{
			if (data[i])
				c[i][j] = max(c[i + 1][j] - 1, 0);
			else
				c[i][j] = c[i + 1][j] + 1;

			if (res < c[i][j])
				res = c[i][j];
		}
	}

	cout << res;
	return 0;
}