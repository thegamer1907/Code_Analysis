
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

#include <iomanip>

using namespace std;

int maxsubset(vector<int> all, int ress)
{
	int res = -ress;
	int max_so_far = 0;
	for (int i = 0; i < all.size(); i++)
	{
		max_so_far += all[i];
		res = max(res, max_so_far);
		if (max_so_far < 0)
		{
			max_so_far = 0;
		}

	}
	return res;
}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	vector<int> all;

	int nr_ones = 0;

	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		if (t == 0)
		{
			all.push_back(1);
		}
		else
		{
			nr_ones++;
			all.push_back(-1);
		}
	}

	int ans = maxsubset(all,nr_ones);
	cout << ans + nr_ones;


}