#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
const int MaxN = 100;
using namespace std;
string s, t[MaxN + 5];
int n;
int main()
{
	cin >> s >> n;
	bool ok = 0;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
		if(t[i] == s) ok = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(t[i][1] == s[0] && t[j][0] == s[1]) ok = 1;
		}
	}
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
}