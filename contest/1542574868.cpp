#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main() {
	string t, a;
	
	cin >> t;
	int n;
	bool f1 = false, f2 = false, f3 = false;
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a;
		f1 = f1 || (a[0] == t[1]);
		f2 = f2 || (a[1] == t[0]);
		f3 = f3 || (a[0] == t[0] && a[1] == t[1]);
		// printf("%d -- : %c %c\n", i, a[0], a[1]);
	}
	if (f3 || (f1 && f2))
		puts("YES");
	else puts("NO");

	return 0;
}