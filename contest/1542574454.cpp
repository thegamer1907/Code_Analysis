#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int imax = INT_MAX;
int imin = INT_MIN;
ll llmax = LLONG_MAX;
ll llmin = LLONG_MIN;

int  main()
{
	int n, k;
	cin >> n >> k;
	vector<set<vector<bool>>> am = vector<set<vector<bool>>>(5, set<vector<bool>>());
	vector<vector<bool>> matr = vector<vector<bool>>(n, vector<bool>(k));
	for (int i = 0; i < n; i++)
	{
		int num(0);
		vector<bool> t;
		for (int j = 0; j < k; j++)
		{
			int q;
			cin >> q;
			if (q == 0) {
				matr[i][j] = true;
				t.push_back(true);
				num++;
			}
			else {
				matr[i][j] = false;
				t.push_back(false);
			}
		}
		am[num].insert(t);
	}
	if (!am[k].empty()) {
		cout << "YES" << endl;
		return 0;
	}
	for (auto it = am[(k + 1) / 2].begin(); it != am[(k + 1) / 2].end(); it++)
	{
		vector<int> a;
		for (int j = 0; j < k; j++)
			if ((*it)[j] == false)
				a.push_back(j);
		for (int i = 0; i < n; i++)
		{
			bool fl = false;
			for (int j = 0; j < (k - (k + 1) / 2); j++) {
				if (matr[i][a[j]] == false) {
					fl = false;
					break;
				}
				fl = true;
			}
			if (fl) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	for (auto it = am[(k + 1) / 2 + 1].begin(); it != am[(k + 1) / 2 + 1].end(); it++)
	{
		vector<int> a;
		for (int j = 0; j < k; j++)
			if ((*it)[j] == false)
				a.push_back(j);
		for (int i = 0; i < n; i++)
		{
			bool fl = false;
			for (int j = 0; j < a.size(); j++) {
				if (matr[i][a[j]] == false) {
					fl = false;
					break;
				}
				fl = true;
			}
			if (fl) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}