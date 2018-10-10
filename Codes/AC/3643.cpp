#include <iostream>
#include <vector>
#include <set>
#include <map>
#include<string>
#include <functional>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAXN = 200002;

struct Node
{
	vector<Node *> outcome;
	bool visited;
	long long value;
	int comp;
};

long long count1 = 0;
long long count2 = 0;
long long count3 = 0;
long long n1, n2, n3;
long long p1, p2, p3;
long long money;

bool check(long long value)
{
	long long current_need = 0;

	current_need += p1 * value*count1 + p2 * count2 * value + p3 * count3 * value;

	current_need -= min(n1, value* count1) * p1 + min(n2, value* count2) * p2 + p3 * min(n3, value*count3);

	return current_need <= money;
}

string input;

int main()
{
	cin >> input;
	for (auto ch : input)
	{
		if (ch == 'B')
			count1++;
		if (ch == 'S')
			count2++;
		if (ch == 'C')
			count3++;
	}

	cin >> n1 >> n2 >> n3;

	cin >> p1 >> p2 >> p3;

	cin >> money;

	long long l = 0;
	long long r = 100000000000000;

	while (r - l > 1)
	{
		auto mid = (l + r) >> 1;

		if (check(mid))
		{
			l = mid;
		}
		else
		{
			r = mid;
		}
	}

	cout << l;

	return 0;
}