/******************************************
*    AUTHOR:         BHUVNESH JAIN        *
*    INSTITUITION:   BITS PILANI, PILANI  *
******************************************/
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL, LL> pll;

#define fi				first
#define sec 			second

int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
	#endif
	string s;
	cin >> s;
	int n;
	cin >> n;
	vector<string> a(n);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == s) {
			cout << "YES";
			return 0;
		}
	}
	bool f = 0, g = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i][1] == s[0]) {
			f = 1;
		}
		if (a[i][0] == s[1]) {
			g = 1;
		}
	}
	if (f && g) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}