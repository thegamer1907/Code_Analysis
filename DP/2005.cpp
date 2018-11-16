#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <locale> 
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, idx; cin >> n >> m;
	map<int, int> Marr;
	vector<int> arr(n), distinct(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	distinct[n - 1] = 1;
	Marr[arr[n-1]] = 6;
	for (int i = n - 2; i >= 0; i--)
	{
		if (Marr[arr[i]] == 0)
		{
			distinct[i] = distinct[i + 1] + 1;
			Marr[arr[i]] = 6;
		}
		else distinct[i] = distinct[i + 1];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> idx;
		cout << distinct[idx-1] << endl;
	}
	return 0;
}