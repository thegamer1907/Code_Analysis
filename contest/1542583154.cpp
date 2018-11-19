#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
typedef long long ll;

int n, k;
bool know[100000 + 1][5];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	int tmp;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= k; ++j) {
			cin >> tmp;
			if (tmp)know[i][j] = 1;
			else know[i][j] = 0;
		}
	}
	if (k == 1) {
		bool ok = 0;
		for (int i = 1; i <= n; ++i)
			if (know[i][1] == 0)
				ok = 1;
		if (ok)cout << "YES\n";
		else cout << "NO\n";
	}
	else if (k == 2) {
		bool ok1 = 0, ok2 = 0;
		for (int i = 1; i <= n; ++i) {
			if (know[i][1] == 0)ok1 = 1;
			if (know[i][2] == 0)ok2 = 1;
		}
		if (ok1&&ok2)cout << "YES\n";
		else cout << "NO\n";
	}
	else if (k == 3) {
		bool ok1 = 0, ok2 = 0, ok3 = 0;
		bool overlap = 0;
		for (int i = 1; i <= n; ++i) {
			if (know[i][1] == 0)ok1 = 1;
			if (know[i][2] == 0)ok2 = 1;
			if (know[i][3] == 0)ok3 = 1;
			int acc = know[i][1] + know[i][2] + know[i][3];
			if (acc <= 1)overlap = 1;
		}
		if (ok1&&ok2&&ok3&&overlap)
			cout << "YES\n";
		else cout << "NO\n";
	}
	else {
		bool ok[5] = { 0,0,0,0,0 };
		bool three = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= 4; ++j)
				if (know[i][j] == 0)ok[j] = 1;
			int acc = know[i][1] + know[i][2] + know[i][3] + know[i][4];
			if (acc <= 1)three = 1;
		}
		bool tt1 = 0, tt2 = 0, tt3 = 0;
		bool x, y;
		//1 2
		x = 0, y = 0;
		for (int i = 1; i <= n; ++i) {
			if (know[i][1] == 0 && know[i][2] == 0)
				x = 1;
			if (know[i][3] == 0 && know[i][4] == 0)
				y = 1;
		}
		if (x&&y)tt1 = 1;
		// 1 3
		x = 0, y = 0;
		for (int i = 1; i <= n; ++i) {
			if (know[i][1] == 0 && know[i][3] == 0)
				x = 1;
			if (know[i][2] == 0 && know[i][4] == 0)
				y = 1;
		}
		if (x&&y)tt2 = 1;
		//1 4
		x = 0, y = 0;
		for (int i = 1; i <= n; ++i) {
			if (know[i][1] == 0 && know[i][4] == 0)
				x = 1;
			if (know[i][3] == 0 && know[i][2] == 0)
				y = 1;
		}
		if (x&&y)tt3 = 1;
		if (ok[1] && ok[2] && ok[3] && ok[4]) {
			if (three || tt1 || tt2 || tt3)
				cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
	return 0;
}