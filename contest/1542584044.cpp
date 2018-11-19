#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <functional>
#include <set>
#include <queue>
#include <string>
#include <map>
#include <sstream>

using namespace std;

vector<vector<int>> arr;
map<vector<int>, int> check;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		vector<int> v;
		for (int j = 0; j < k; j++)
		{
			int val;
			cin >> val;
			v.push_back(val);
		
		}
		if (check[v] == 0)
		{
			check[v]++;
			arr.push_back(v);
		}
	}
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			int cnt = 0;
			for (int q = 0; q < k; q++)
				if (arr[i][q] == 1 && arr[j][q] == 1)
					break;
				else
					cnt++;
			if (cnt == k)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}