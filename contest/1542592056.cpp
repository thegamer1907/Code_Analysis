#include <iostream>
#include <cstdio>
using namespace std;

int n;
bool v0, v1;
string a, b;
int main()
{
	cin >> a >> n;
	while (n--) {
		cin >> b;
		if (b[1] == a[0]) v0 = 1;
		if (b[0] == a[1]) v1 = 1;
		if (b[0] == a[0] && b[1] == a[1]) v0 = v1 = 1;
	}
	if (v0 && v1) cout << "YES";
	else cout << "NO";
    return 0;
}