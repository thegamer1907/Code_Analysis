#include<bits/stdc++.h>

#define MOD 1000000007
#define nl '\n'
#define mp make_pair
#define f first
#define sc second
using namespace std;



int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string str, cp;
	cin >> str;
	int n;
	cin >> n;
	int a, b, c;
	a = b = c = 0;
	for (int i = 0; i < n; i++) {
		cin >> cp;
		if (str[0] == cp[0] && str[1] == cp[1]) c = 1;
		if (str[1] == cp[0]) a = 1;
		if (str[0] == cp[1]) b = 1;

	}
	if (a&&b || c ) cout << "YES\n";
	else cout << "NO\n";

}