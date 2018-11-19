#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int n;
	cin >> n;
	bool first = false, second = false;
	fori(i, 0, n) {
		string cur;
		cin >> cur;
		if(s == cur) {
			cout << "YES" << '\n';
			return 0;
		}
		if(cur[0] == s[1]) {
			second = true;
		}
		if(cur[1] == s[0]) {
			first = true;
		}
	}

	if(first && second) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}

	return 0;
}

