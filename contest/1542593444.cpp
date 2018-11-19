#include <bits/stdc++.h>
using namespace std;

string ans;
int n;
string s[104];

void yes() {
	cout << "YES";
	exit(0);
}

int main()
{
	cin >> ans;
	cin >> n;
	for (int i=0; i<n; i++) cin >> s[i];

	for (int i=0; i<n; i++) if (s[i] == ans) yes();
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
		if (s[i][1] == ans[0] and s[j][0] == ans[1]) yes();
	}

	cout << "NO";
}
