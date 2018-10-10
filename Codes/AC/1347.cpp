#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <functional>
#include <algorithm>

using namespace std;


struct Node
{
	vector<Node *> outcome;
	int index;
};
int n, m;
long long s;

long long inp_data[100001];
vector<long long> temp(100001);

long long min_cost = numeric_limits<long long >::max();

bool check(long long k)
{
	for (int i = 0; i < n; i++)
	{
		temp[i] = inp_data[i] + (i + 1) * k;
	}


	sort(temp.begin(), temp.begin() + n);

	long long current_cost = 0;
	for (int i = 0; i < k; i++)
	{
		current_cost += *(temp.begin() + i);
	}

	if (current_cost <= s)
	{
		min_cost = current_cost;
	}

	return current_cost <= s;
}

int main()
{
	cin >> n >> s;


	for (int i = 0; i < n; i++)
		cin >> inp_data[i];

	long long l = 0;
	long long r = n + 1;

	long long answer = 0;


	while (r - l > 1)
	{
		auto mid = (l + r) >> 1;
		if (check(mid))
		{
			l = mid;
			answer = mid;
		}
		else
		{
			r = mid;
		}
	}

	cout << answer << " " << (answer == 0 ? 0 : min_cost);

	return 0;
}