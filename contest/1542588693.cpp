#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, a[105];
    cin >> s;
    int n, p = 0, q = 0, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == s) {
	    cout << "YES" << endl;
	    return 0;
	}
	if (a[i][0] == s[1] && a[i][1] == s[0]) {
	    cout << "YES" << endl;
	    return 0;
	}
	if (a[i][0] == s[1]) p = 1;
    }
    for (i = 1; i <= n; i++) {
        if (p == 1 && a[i][1] == s[0]) q = 1;
    }
    cout << ((p == 1 && q == 1) ? "YES" : "NO") << endl;
    return 0;
}