#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100 + 10;
int a[MAX_N];

int main() {
	string s;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++)
		a[i] = s[i] - '0';
	for (int i = 0; i < n; i++)
		if (a[i] % 8 == 0)
			return cout << "YES\n" << a[i], 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if ((a[i] * 10 + a[j]) % 8 == 0)
				return cout << "YES\n" << a[i] << a[j], 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				if ((a[i] * 100 + a[j] * 10 + a[k]) % 8 == 0)
					return cout << "YES\n" << a[i] << a[j] << a[k], 0;
	cout << "NO";
}
