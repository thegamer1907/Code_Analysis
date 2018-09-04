#include <bits/stdc++.h>
using namespace std;

// Z-Function
// Time Complexity: O(|str|)

const int MAXN = 1123456;
int z[MAXN];

void zfunction (const string & str) {
	int n = str.size();

	int L = 0, R = 0;
	for (int i = 1; i < n; ++i) {
		if (i > R) {
			L = R = i;
			while (R < n && str[R - L] == str[R]) ++R;
			z[i] = R - L; --R;
		} else {
			int k = i - L;
			if (z[k] < R - i + 1) z[i] = z[k];
			else {
				L = i;
				while (R < n && str[R - L] == str[R]) ++R;
				z[i] = R - L; --R;
			}
		}
	}
}

int main () {

	string s;
	cin >> s;

	int n = s.size();
	zfunction (s);

	/*
	for (int i = 0; i < n; ++i)
		cout << i << " ";
	cout << endl;
	for (int i = 0; i < n; ++i)
		cout << z[i] << " ";
	cout << endl;
	*/
	int ans = 0;
	int msize = 0;
	for (int i = n - 2; i > 0; --i) {
		msize = max (z[n - i - 1], msize);
		if (z[n - i] == i && msize >= i) {
			ans = i;
			break;
		}
	}

	if (ans) {
		for (int i = 0; i < ans; ++i)
			printf ("%c", s[i]);

		cout << endl;
	} else
		cout << "Just a legend" << endl;

	return 0;
}