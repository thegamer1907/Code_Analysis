#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>
#include <map>
#include<set>

using namespace std;


int inp_data[200001];
long long prefix_sum[200001];

int last_alive;


int n, q;

long long last_alive_lives;
int last_alive_ind;

int calc(long long curr)
{
	int r = n;
	int l = last_alive_ind;
	if (last_alive_ind == n)
	{
		if (last_alive_lives > curr)
		{
			last_alive_lives -= curr;
			return 1;
		}
		else
		{
			last_alive_ind = 1;
			last_alive_lives = inp_data[0];
			return n;
		}
	}

	while (true)
	{
		if (l >= r)
			break;

		auto mid = (l + r) >> 1;
		auto val = prefix_sum[mid] - prefix_sum[last_alive_ind] + last_alive_lives;

		if (val < curr)
		{
			l = mid + 1;
		}
		else
		{
			r = mid;
		}
	}
	last_alive_lives = prefix_sum[r] - prefix_sum[last_alive_ind] + last_alive_lives - curr;


	last_alive_ind = r;
	if (last_alive_lives <= 0)
	{
		last_alive_ind += 1;
		if (last_alive_ind > n)
			last_alive_ind = 1;

		last_alive_lives = inp_data[last_alive_ind - 1];
	}

	return (n - last_alive_ind + 1);
}

int main()
{
	cin >> n >> q;
	last_alive_ind = 1;

	prefix_sum[0] = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> inp_data[i];

		prefix_sum[i + 1] = (i == 0 ? 0 : prefix_sum[i]) + inp_data[i];
	}

	last_alive_lives = inp_data[0];


	for (int i = 0; i < q; i++)
	{
		long long curr;

		cin >> curr;
		cout << calc(curr) << "\n";
	}

	return 0;
}