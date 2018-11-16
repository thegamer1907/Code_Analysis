#define _CRT_SECURE_NO_WARNINGS
#define vec2(x) vector <vector<x>>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cstdio>
#include <iomanip>
#include <stack>
#include <queue>
#include <deque>
typedef long long LL;
const int MAX = 3 * 10e4 + 1;

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);
	int n, k;
	cin >> n >> k;
	vector <int> Way(n);
	for (int i = 0; i < n; i++)
		cin >> Way[i];
	int i = 0;
	while (k > i + 1)
	{
		i += Way[i];
	}
	if (k == i+1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}