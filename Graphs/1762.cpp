#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
using namespace std;
vector<int>vec;
vector<int>vec2;
int n, t, x;

int main()
{
	cin >> n >> t;
	vec2.push_back(1);
	for (int i = 0; i < n-1; i++)
	{
		cin >> x;
		vec.push_back(x);
	}
	int i = 1;
	while (i <= vec.size())
	{
		i += vec[i-1];
		vec2.push_back(i);
	}
	sort(vec2.begin(), vec2.end());
	if (binary_search(vec2.begin(), vec2.end(), t))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}