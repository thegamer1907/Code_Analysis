#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int n;
string a;
char s1, s2, p1, p2;
bool ck1, ck2, ans;
int main() {
	while (cin >> a >> n) {
		ans = 0, ck1 = 0, ck2 = 0;
		s1 = a[0], s2 = a[1];
		for (int i = 0; i < n; ++i) {
			cin >> a;
			if (ans) continue;
			if (a[0] == s1 && a[1] == s2) {
				ans = 1;
				continue;
			}
			if (a[0] == s2) 
				ck1 = 1;
			if (a[1] == s1)
				ck2 = 1;
			ans = (ck1 && ck2);
		}
		if (ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}