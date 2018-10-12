#include <array>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <fstream>
#include <iomanip>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <string>
#include <unordered_set>
#include <set>
#include <cmath>
#include <queue>
#include<stack>
using namespace std;

#define var auto

#define ll long long

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> input;
	int sum = 0;
	int ma = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		ma = max(ma, x);
		sum += x;
		input.push_back(x);
	}
	cout << max(ma, (sum + m) / n + ((sum + m) % n != 0)) << " " << ma + m;
}