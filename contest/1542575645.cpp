#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <cstdlib>
#include <stdio.h>
#include <functional>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int k, n, a[100000][4];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			cin >> a[i][j];
	if (k == 1)
	{
		for (int i = 0; i < n; i++)
			if (a[i][0] == 0) {
				cout << "YES";
				return 0;
			}
		cout << "NO";
		return 0;
	}
	if (k == 2)
	{
		int y = 0, t = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i][0] == 0)
				y = 1;
			if (a[i][1] == 0)
				t = 1;
		}
		if (y == 1 && t == 1)
		{
			cout << "YES";
			return 0;
		}
		cout << "NO";
		return 0;
	}
	if (k == 3)
	{
		int v1 = 0, v2 = 0, v3 = 0, f1 = 0, f2 = 0, f3 = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i][0] == 0 && a[i][1] == 0) v1 = 1;
			if (a[i][0] == 0 && a[i][2] == 0) v2 = 1;
			if (a[i][2] == 0 && a[i][1] == 0) v3 = 1;
			if (a[i][0] == 0) f1 = 1;
			if (a[i][1] == 0) f2 = 1;
			if (a[i][2] == 0) f3 = 1;
		}
		if ((v1 == 1 && f3 == 1) || (v2 == 1 && f2 == 1) || (v3 == 1 && f1 == 1))
		{
			cout << "YES";
			return 0;
		}
		cout << "NO";
		return 0;
	}
	if (k == 4)
	{
		int v1 = 0, v2 = 0, v3 = 0, f1 = 0, f2 = 0, f3 = 0, r1 = 0, r2 = 0, r3 = 0, r4 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i][0] == 0 && a[i][1] == 0) v1 = 1;
			if (a[i][0] == 0 && a[i][2] == 0) v2 = 1;
			if (a[i][0] == 0 && a[i][3] == 0) v3 = 1;
			if (a[i][1] == 0 && a[i][2] == 0) f1 = 1;
			if (a[i][1] == 0 && a[i][3] == 0) f2 = 1;
			if (a[i][2] == 0 && a[i][3] == 0) f3 = 1;
			if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0) r1 = 1;
			if (a[i][0] == 0 && a[i][2] == 0 && a[i][3] == 0) r2 = 1;
			if (a[i][0] == 0 && a[i][1] == 0 && a[i][3] == 0) r3 = 1;
			if (a[i][2] == 0 && a[i][3] == 0 && a[i][1] == 0) r4 = 1;
			if (a[i][0] == 0) s1 = 1;
			if (a[i][1] == 0) s2 = 1;
			if (a[i][2] == 0) s3 = 1;
			if (a[i][3] == 0) s4 = 1;
		}
		if ((v1 == 1 && f3 == 1) || (v2 == 1 && f2 == 1) || (v3 == 1 && f1 == 1) || (r1 == 1 && s4 == 1) || (r2 == 1 && s2 ==1) || (r3 == 1 && s3 == 1) || (r4 == 1 && s1 == 1))
		{
			cout << "YES";
			return 0;
		}
		cout << "NO";
		return 0;
	}
	//system("pause");
	return 0;
}